n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
x,y=0,0
for i in range(n):
	x,y=max(x,y+a[i]),max(x+b[i],y)
print(max(x,y))
