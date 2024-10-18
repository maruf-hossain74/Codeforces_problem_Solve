t=int(input())
for _ in range(t):
	n=int(input())
	l=1
	r=n
	for i in range(n):
		if i&1:
			print(l,end=" ")
			l+=1
		else:
			print(r,end=" ")
			r-=1
	print()