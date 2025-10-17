n= int(input())
a= list(map(int,input().split()))
s1= sum(a)
ans=0
for i in range(1,6):
    if(s1+i)%(n+1)!=1:
        ans+=1
print(ans)
