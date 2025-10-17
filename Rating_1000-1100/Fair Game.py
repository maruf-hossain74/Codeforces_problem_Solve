n = int(input())
a = list(int(input()) for i in range(n))
b = set(a)
if a.count(a[0]) == n // 2 and len(b) == 2:
    print("YES")
    print(*b)
else:
    print("NO")
