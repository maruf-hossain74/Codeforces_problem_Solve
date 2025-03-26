for _ in range(int(input())):
    n,k=map(int,input().split())
    a=[n-(k+1)%2]*n
    a[n-2]=n
    a[n-1]=n-1
    print(*a)
