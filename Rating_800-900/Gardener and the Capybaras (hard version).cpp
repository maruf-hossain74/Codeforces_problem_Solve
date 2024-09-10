t=int(input())
while t:
    s=input()
    if s[1]=="a":
        v1=s[0]
        v2=s[1]
        v3=s[2:]
    else:
        v1=s[0]
        v2=s[1:len(s)-1]
        v3=s[len(s)-1]
 
    print(v1,v2,v3)
    t-=1
