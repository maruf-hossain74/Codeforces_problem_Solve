input()
A= list(map(int,input().split()))
a=sum(A)
b=a/3
c=2*b
m=n=t=0
for i in A:
    m+=i
    if m==b:
        n+=1
    if m==c:
        t+=n
print((n-1)*(n-2)//2 if a==0 else t)
