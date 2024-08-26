R=lambda:map(int,input().split())
t,=R()
while t:
 t-=1;n,k=R();i=m=0
 for x in R():i+=1;m+=(x-i)%k>0
 print(m and'-1'[m<3:])
   		  	 	  				 		 				 		