for _ in range(int(input())):
    n = int(input())
    ans = "aeiou"
    each = n // 5
    a = each + (n%5 > 0)
    e = each + (n%5 > 1)
    ii = each + (n%5 > 2)
    o = each + (n%5 > 3)
    for i in range(a):
        print('a', end = "")
    for i in range(e):
        print('e', end = "")
    for i in range(ii):
        print('i', end = "")
    for i in range(o):
        print('o', end = "")
    for i in range(each):
        print('u', end = "")
    print()
