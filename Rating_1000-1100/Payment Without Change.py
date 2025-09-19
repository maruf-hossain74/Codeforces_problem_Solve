for _ in range(int(input())):
    a,b,n,s = map(int,input().split())
    aneed = s//n
    if aneed<=a:
        print("YES" if aneed*n+b>=s else "NO")
    else:
        print("YES" if a*n+b>=s else "NO")
