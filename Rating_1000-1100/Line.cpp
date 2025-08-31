t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    k=[]
    h=[0]*n
    su=0
    for i in range(n):
        if s[i]=='L':
            su+=i
            y=n-i-1-i
        else:
            su+=n-i-1
            y=i-(n-i-1)
        k.append(max(0, y))
    k.sort(reverse=True)
    h[0]=su+k[0]
    for j in range(1,n):
        h[j]=h[j-1]+k[j]
    print(*h)
