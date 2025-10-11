
for _ in range(int(input())):

    m, x, a1, ak = map(int,input().split())
    z=min(m % x, a1)
    m -= z
    a1 -= z
    ak += a1 // x
    print(max(m // x - ak , 0) + m % x)
