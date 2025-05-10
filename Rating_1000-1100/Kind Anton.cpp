#include<bits/stdc++.h>
using namespace std;
main(){
int i,j,k,l,m,n,o,p;
cin>>p;
while(p--){
cin>>n;
int x[n],y[n];
for(i=0;i<n;i++)cin>>x[i];
for(i=0;i<n;i++)cin>>y[i];
   j=0;k=0;l=0;
   for(i=0;i<n;i++){
    if(x[i]>y[i]&&k==0) l++;
    else if(x[i]<y[i]&&j==0) l++;
    if(x[i]==-1) k++;
    else if(x[i]==1) j++;
   }
   if(l==0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
} return 0;
}