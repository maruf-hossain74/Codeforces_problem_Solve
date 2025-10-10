for _ in range(int(input())): 
    n=int(input())
    l1=input()
    l2=list(map(int,input().split()))
    s=0
    mx=-1
    for i in range(n): 
        if l1[i]=='1':s+=max(l2[i],mx)
        if l1[i]=='0' or l2[i]<mx:mx=l2[i]
    print(s)
