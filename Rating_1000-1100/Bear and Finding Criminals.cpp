#include<bits/stdc++.h>
using namespace std;
int n,a,k,i=1,b[105];
main(){
    for(cin>>n>>a;i<=n;i++)cin>>b[i],k+=b[i];
    for(i=1;i<=min(a-1,n-a);i++)if(b[a-i]+b[a+i]==1)k--;
    cout<<k;
}
