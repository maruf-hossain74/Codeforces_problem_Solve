#include<bits/stdc++.h>
using namespace std;
int n;
string s,t,u;
main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s,t+=s;
    u=t;reverse(t.begin(),t.end());
    cout<<(u==t?"YES":"NO");
}
