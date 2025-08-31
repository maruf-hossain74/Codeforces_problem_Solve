t = int(input())
for _ in range(t):
    n, k, g = [int(i) for i in input().split()]
    s = min(k*g, n*((g-1)//2))
    print(s//g*g)
