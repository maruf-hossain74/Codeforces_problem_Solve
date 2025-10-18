import math
for _ in range(int(input())):
    n = int(input())
    r = (n**2) - (4*n)
    if r<0:
        print("N")
    else:
        x = math.sqrt(r)
        a = (n + x) / 2
        b = (n - x) / 2
        print("Y",a,b)
