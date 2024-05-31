for tc in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    t = 1
    
    for i in range(n):
        while l[i] % 2 == 0:
            l[i] //= 2
            t *= 2
    
    l.sort()
    l[-1] *= t
    print(sum(l))
