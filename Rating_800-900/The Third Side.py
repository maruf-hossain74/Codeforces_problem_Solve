for _ in range(int(input())):
    n = int(input())
    a = map(int, input().split())
    s = sum(a)
    print(s-n+1)
