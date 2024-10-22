t=int(input())
while t!=0:
    t-=1
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    v1=l[0]
    count=0
    v2=l[-1]
    for i in range(len(l)):
        if l[i]==v1:
            count+=1
        if count==k:
            d=l[i: ].count(v2)
            break       
    if k<=l.count(v1) and l[-1]==v1: #and d>k:
        print("yes")
    elif k<=l.count(v1) and d>=k:
        print("yes")
    else:
        print("no")
    

