for _ in range(int(input())):
    n = int(input())
    lst = list(map(int,input().split()))
    lst.sort(reverse=True)
    A = lst[::2]
    B = lst[1::2]
    AA,BB = 0,0 
    for i in A:
        if i%2==0:
            AA += i
    for i in B:
        if i%2==1:
            BB += i
    if AA > BB:
        print("Alice")
    elif AA < BB:
        print("Bob")
    else:
        print("Tie")
