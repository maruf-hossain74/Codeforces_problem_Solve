for _ in range(int(input())):
	a=int(input())
	if a==1:
		print(1)
	elif a%2==1:
		print(-1)
	else:
		p=[]
		for i in range(2,a+1,2):
			p.append(i)
			p.append(i-1)
		print(*p)
