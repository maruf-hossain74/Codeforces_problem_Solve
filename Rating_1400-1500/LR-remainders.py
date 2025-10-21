for _ in range(int(input())):
    n,m = map(int,input().split())
    A = list(map(int,input().split()))
    com = input()
    l=0
    r = n-1
    for c in com:
 
        if c=='L':
            l+=1
        else:
            r-=1
    ans = []
    curr = 1
    for c in com[::-1]:
        if c=='L':
            l-=1
            curr = (curr*A[l])%m
        else:
            r+=1
            curr = (curr*A[r])%m
        ans.append(curr)
 
    ans.reverse()
    print(*ans)    
 
