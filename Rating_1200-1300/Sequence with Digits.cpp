for _  in range(int (input())):
    n,k = map(int, input().split())
    
    while k!=1:
        m = list(str(n))
        m.sort()
        n += int(m[-1])*int(m[0])
        if m[0] == '0':
            break
        k-=1
    print(n)
