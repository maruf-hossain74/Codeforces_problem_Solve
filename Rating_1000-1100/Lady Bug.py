for _ in range (int(input())):
    n=int(input())
    a1=input()
    b1=input()
    cnt1=0
    cnt2=0
    for i in range (n):
        if i%2==1:
            if a1[i]=='1':
                cnt2-=1
            if b1[i]=='0':
                cnt1+=1
        else:
            if a1[i]=='1':
                cnt1-=1
            if b1[i]=='0':
                cnt2+=1
    if cnt1>=0 and cnt2>=0:
        print("YES")
    else:
        print("NO")
            


            


'''def swap(a,b, i, j):
    a[i], b[j] = b[j], a[i]


for _ in range (int(input())):
    n=int(input())
    a1=input()
    b1=input()
    a=list(a1)
    b=list(b1)
    flag=1
    for i in range(n-1,0,-1):
        if a[i]=='1':
            k=i
            while True:
                if k<1:
                    flag=0
                    break
                k-=1
                if k>0 and b[k]=='1':
                    k-=1
                    if k>0 and a[k]=='1':
                        continue
                    else:
                        if k>0:
                            swap(a,b,k,k+1)
                        break
                else:
                    if k>0:
                        swap(a,b,k+1,k)
                    break
    print(*a)
    print("YES" if flag==1 else "NO")

'''
