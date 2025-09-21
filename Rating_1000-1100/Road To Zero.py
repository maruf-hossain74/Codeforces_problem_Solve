for _ in range(int(input())):
    x,y = map(int,input().split())
    a,b = map(int,input().split())
    ans1 = min(abs(x),abs(y))*b + a*abs(x-y)
    ans2 = a*(x+y)
    print(min(ans1,ans2))
