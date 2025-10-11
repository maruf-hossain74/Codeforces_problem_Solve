for _ in range(int(input())):
    y = int (input())
    flag = True
    for i in range(int(y//11)+1):
        if (y - (11*i))%111 == 0 and y>=11:
            print('YES')
            flag = False
            break
    if flag:
        print('NO')
