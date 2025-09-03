#include <bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
     	int n,sum=0;
     	cin>>n;
     	int A[n],one=0,two=0;
         int three=0,four=0;
         int s1,s2;
     	for(int i=0; i<n; i++) 
         {
     		cin>>A[i];
             sum+=A[i];
             if(A[i]==1)
             one++;
             else if( A[i]==2)
             two++;
             else if(A[i]==3)
             three++;
             else if(A[i]==4)
             four++;
         }    
         s1= two/2;
         if(sum<=4)
         	cout<<1<<"\n";
         else if(one>three+((two%2)*2))
         {
          	s2=(one-three-((two%2)*2))/4;
          	if ( (one-three-((two%2)*2))%4==0)
         	cout<<four+three+s1+s2+(two%2)<<"\n";
         	else
         	cout<<four+three+s1+(two%2)+s2+1<<"\n";
          }
          else
          	cout<<four+three+s1+(two%2)<<"\n";
         return 0;
}
