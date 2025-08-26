for i in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    l=0
    res=0
    s=0
    for i in range(n):
        s+=a[i]
        while s>m or (l<n and abs(a[i]-a[l])>1 and l<=i):
            s-=a[l]
            l+=1
        res=max(res,s)
    print(res)
