def swapp(s1, s2, i):
    s1l = list(s1)
    s2l = list(s2)
    x, y = s1l[i], s2l[i]
    s1l[i], s2l[i] = y, x
    ss1 = ''.join(s1l)
    ss2 = ''.join(s2l)
    a = int(ss1)
    b = int(ss2)
    c = int(s1)
    d = int(s2)
    if a*b > c*d:
        #print(ss1, ss2)
        return ss1, ss2
    else:
        #print(s1, s2)
        return s1, s2
for _ in range(int(input())):
    x = input()
    y = input()
    for i in range(len(x)):
        x, y = swapp(x,y,i)
            
    print(x)
    print(y)
