import sys
input=sys.stdin.readline
 
for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[0]*(n*m)
    for i in range(n):
        m1=list(map(int,input().split()))
        a[m1[0]-1]=m1
    col=[]
    for i in range(m):
        n1=list(map(int,input().split()))
        if a[n1[0]-1]!=0:
            col=n1
    for i in col:
        print(*a[i-1])