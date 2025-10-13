#simple program kinto age keno parlam na!!!!!!!!!!!!!!!!!!!!
for _ in range(int(input())):
    s = input()
    cap,small = [],[]
    for i in range(int(len(s))):
        if s[i] == 'B' and len(cap)>0:
            cap.pop()
        elif s[i] == 'b'and len(small)>0:
            small.pop()
        elif s[i].isupper() and s[i] != 'B':
            cap.append(i)
        elif s[i].islower() and s[i] != 'b':
            small.append(i)
    ans = cap + small
    ans.sort()
    for i in ans:
        print(s[i], end = "")
    print()
