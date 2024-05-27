for _ in range(int(input())):
    n = int(input())
    s = input()
    a = s.count('mapie')
    b = s.count('map')
    c = s.count('pie')
    print(c + b - a)