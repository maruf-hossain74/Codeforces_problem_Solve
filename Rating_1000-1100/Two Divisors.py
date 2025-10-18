import math
for _ in range(int(input())):
    a,b=map(int,input().split())
    print(a*b//math.gcd(a,b) if b%a!=0 else b*(b//a))
