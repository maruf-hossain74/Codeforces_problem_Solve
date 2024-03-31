ans = 0
xx,yy =0,0
xmin , ymin, xmax, ymax = 100000000000, 1000000000000, 0,0
xfound, yfound = 0, 0
dif = []
for _ in range(int(input())):
    s = input()
    x = s.count('0')
    y = s.count('1')
    dif.append(x-y)
    if x != 0 and y != 0:
        xfound, yfound = x, y
    xmin, xmax, ymin, ymax = min(xmin, x), max(xmax, x), min(ymin, y), max(ymax, y)
    if x!= 0:
        xx+=1
    if y!=0:
        yy+=1
    ans += min(x,y)
if xx == 0 or yy == 0:
    print(0)
    exit()
elif xx == 1 or yy == 1:
    if xx == 1:
        ans = min(yfound, xfound+ymin)
    else:
        ans = min(xfound, yfound+xmin)
    print(ans)
    exit()
if all(dif[i] > 0 for i in range(len(dif))):
    ans += min(dif)
if all(dif[i] < 0 for i in range(len(dif))):
    ans -= max(dif)
print(ans)
