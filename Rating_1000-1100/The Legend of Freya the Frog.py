for _ in range(int(input())):
    a, b, k = map(int, input().split())
    x = (a//k) + (a%k>0)
    y = (b//k) + (b%k>0)
    if y < x:
        print(2*x-1)
    else:
        print(2*y)    
