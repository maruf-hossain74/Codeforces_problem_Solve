#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--) {
       int n,m;
       cin>>n>>m;
       bool pos = false;
       for(int i=1;i<=n;i++)
       {
           int a,b,c,d;
           cin>>a>>b>>c>>d;
           if(b==c)
              pos = true;
       }
       if((m&1) || (pos==false))
       {
           cout<<"NO\n";
           continue;
       }
       if(pos)
       cout<<"YES\n";
    }
   return 0;
}