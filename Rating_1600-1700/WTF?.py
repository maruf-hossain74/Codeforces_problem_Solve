f,br,bz,qz=0,0,0,1
for _ in range(int(input())):
    pr=int(input())
    f+=pr
    br+=1
    if f*qz>br*bz:
        bz=f
        qz=br
print(round(bz/qz,6))
