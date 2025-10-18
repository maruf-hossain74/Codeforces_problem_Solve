for _ in range(int(input())):
    n = int(input())
    ans = 2 
    A = [*map(int, input().split())]
    while len({i%ans for i in A}) != 2:
        ans *=2
    print(ans)
