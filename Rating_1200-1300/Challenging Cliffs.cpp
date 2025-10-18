for _ in range(int(input())):
    n = int (input())
    A = list(map(int,input().split()))
    A.sort()
    if n == 2:
        print(*A)
    else:    
        d = [A[i+1] - A[i] for i in range(n-1)]
        x = d.index(min(d))
        s1 = A[x+1:]
        s2 = A[:x+1]
        ans = s1+s2
        for i in ans:
            print(i,end= " ")
        print()    
