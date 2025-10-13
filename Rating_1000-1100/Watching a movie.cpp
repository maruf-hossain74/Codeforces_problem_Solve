#include<iostream>
using namespace std;
int T,n,x,y,s,k;
int main()
{
    cin>>T>>n;
    while(cin>>x>>y)s+=(x-k-1)%n+y-x+1,k=y;
    cout<<s<<endl;
    return 0;}
