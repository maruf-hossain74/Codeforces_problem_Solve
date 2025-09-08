#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k,l,a;
    cin>>n>>m>>k>>l;
    if((l+k)%m==0)
    a=(l+k)/m;
    else
    a=(l+k+m)/m;
    if(a*m>n) cout<<-1<<"\n";
    else cout<<a<<"\n";
    return 0;
}
