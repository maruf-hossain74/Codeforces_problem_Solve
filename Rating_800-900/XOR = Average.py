    n = int(input())
    for i in range(n):
        x = int(input())
        if x == 1:
            print(1)
        else:
            print(*([1+x%2] + [2]*(x-2)+[3-x%2]))
