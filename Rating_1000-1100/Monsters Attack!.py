for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    pos = list(map(int, input().split()))
    heal = [0] * n
    for i in range(n):
        heal[abs(pos[i]) - 1] += a[i]
    live = [0]
    ans = True
    for i in range(n):
        live.append(live[-1] + heal[i])
        if live[-1] > k * (i + 1):
            ans = False
            break
    print("YES" if ans else "NO")
