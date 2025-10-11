n = input()
if '0' in n:
    print('YES')
    print(0)
elif '8' in n:
    print('YES')
    print(8)
else:
    ln = len(n)
    ans = False
    for i in range(ln-1):
        for j in range(i+1,ln):
            if int(n[i] + n[j])%8 == 0 and i!=j:
                print('YES')
                print(n[i] + n[j])
                ans = True
                break
        if ans:
            break
    if not ans:
        for i in range(ln-2):
            for j in range(i+1,ln-1):
                for k in range(j+1, ln):
                    if int(n[i] + n[j] + n[k])%8 == 0 and i!=j and j!=k:
                        print('YES')
                        print(n[i] + n[j] + n[k])
                        ans = True
                        break
                if ans:
                    break
            if ans:
                break
    if not ans:
        print('NO')
