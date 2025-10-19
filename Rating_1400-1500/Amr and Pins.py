import math
r,x,y,x1,y1 = map(int,input().split())
d = math.sqrt((x1-x)*(x1-x) + (y1 - y)*(y1 - y))
r *= 2
if d%r == 0:
    ans = int(d//r)
else:
    ans = int((d//r)+1)
print(ans)
