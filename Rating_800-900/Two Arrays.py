for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    ans = "YES"
    for i in range(n):
        if b[i] - a[i] > 1 or a[i] > b[i]:
            ans = "NO"
    print(ans)