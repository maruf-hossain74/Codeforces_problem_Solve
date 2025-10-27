for i in range(int(input())):
    l = list(input())
    print("YES" if len(l)%2==0 and l[0] != ")" and l[-1] != "(" else "NO")
