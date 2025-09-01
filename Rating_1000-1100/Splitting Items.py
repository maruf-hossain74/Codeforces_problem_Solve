for _ in range(int(input())):
    n,k=[int(e) for e in input().split()]
    a=sorted((int(e) for e in input().split()),reverse=1)
    s=0
    d=0
    for i in range(n):
        if i%2:
            s-=a[i]
            d+=a[i-1]-a[i]
        else:
            s+=a[i]
    print(s-min(k,d))
