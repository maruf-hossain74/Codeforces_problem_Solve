for _ in range(int(input())):
    A = []
    for i in range(9):
        s = input()
        k = ""
        for j in range(9):
            if s[j] == '9':
                k += '1'
            else:
                k += s[j]
        A.append(k)
    for i in A:
        print(i)
