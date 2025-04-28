for s in[*open(0)][1:]:
 a=*map(int,s[:-1]),;i=j=0
 for x,y in zip(a,a[1:]):i=(i,j)[x+y>9];j+=1
 print(s[:i],a[i]+a[i+1],s[i+2:],sep='')
