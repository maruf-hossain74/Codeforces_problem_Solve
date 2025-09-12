t =  int(input())
while t!=0:
    a,b= map(int,input().split())
    if a%2==b%2 and a>=b*b:
        print("YES")
    else:
        print("NO")
    t-=1    
