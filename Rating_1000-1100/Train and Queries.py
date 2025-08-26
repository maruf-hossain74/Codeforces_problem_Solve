for _ in range(int(input())):
	input()
	n,q=map(int,input().split())
	a=list(input().split())
	b={}
	for i in range(n):
		if(a[i] not in b):
			b[a[i]]=[i+1,i+1]
		else:
			b[a[i]][1]=i+1
	for i in range(q):
		u,v=input().split()
		if(u in b and v in b and b[u][0]<b[v][1]):
			print("YES")
		else:
			print("NO")