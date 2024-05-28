for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    min_row = min(a)
    min_column = min(b)

    result = min(n * min_row + sum(b), n * min_column + sum(a))
    print(result)
