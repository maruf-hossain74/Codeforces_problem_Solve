for _ in range(int(input())):
    s = input()
    char1 = ''
    char2 = ''
    int1 = ''
    int2 = ''
    char = True
    cnt = 0
    chars = {'A':1,'B':2,'C':3,'D':4,'E':5,'F':6,
             'G':7,'H':8,'I':9,'J':10,'K':11,'L':12,
             'M':13,'N':14,'O':15,'P':16,'Q':17,'R':18,
             'S':19,'T':20,'U':21,'V':22,'W':23,'X':24,'Y':25,'Z':26}
    ints = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for i in s:
        if i.isdigit():
            if i.isdigit() == char:
                cnt+=1
            char = False
        else:
            char = True
        if char and cnt == 0:
            char1 += i
        elif char and cnt == 1:
            char2 += i
        elif not char and cnt ==1:
            int1 += i
        elif not char and cnt == 2:
            int2 += i
    row = int1
    colint = 0
    colchar = ''
    if char2 == '':
        char1 = char1[::-1]
        for i in range(int(len(char1))):
            colint += chars[char1[i]] *(26** i)
        print(f'R{row}C{colint}')
    else:
        int2 = int(int2)
        while int2!=0:
            rem= (int2%26)-1
            colchar = ints[rem] + colchar
            if int2%26==0:
                int2 -= 26
            int2 //= 26
        print(f'{colchar}{row}')
