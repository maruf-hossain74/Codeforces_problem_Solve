import math
t = int(input())
while t!=0:
    p1,p2 = map(int,input().split())
    a1,a2 = map(int,input().split())
    b1,b2 = map(int,input().split())
    at0 = math.sqrt(a1*a1 + a2*a2)
    atp = math.sqrt((a1-p1)*(a1-p1) + (a2-p2)*(a2-p2))
    atb = math.sqrt((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2))/2
    bt0 = math.sqrt(b1*b1 + b2*b2)
    btp = math.sqrt((b1-p1)*(b1-p1) + (b2-p2)*(b2-p2))
    clsr0 = min(at0,bt0)
    clsrp = min(atp,btp)
    amax = max(atp,at0)
    bmax = max(bt0,btp)
    abmin = min(amax,bmax)
    tmax = max(clsr0,clsrp,atb)
    if (clsr0 == at0 and clsrp == atp) or (clsr0 == bt0 and clsrp == btp):
        ans = abmin
    else:
        ans = tmax
    print(ans)
    t-=1
