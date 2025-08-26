from math import log2
n = int(input())
a = list(map(int,input().split()))
res = 0
for i in range(n-1):
    res+=a[i]
    print(res)
    y=n-(i+1)
    a[i+(2**(int(log2(y))))]+=a[i]