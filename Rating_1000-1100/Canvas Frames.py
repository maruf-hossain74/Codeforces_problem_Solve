n = int(input())
a = list(map(int,input().split()))
s = set(a)
t = 0
for x in s:
    t+=a.count(x)//2
print(t//2)
