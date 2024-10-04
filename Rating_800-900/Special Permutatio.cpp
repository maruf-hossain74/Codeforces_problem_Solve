#include<bits/stdc++.h>
using namespace std;


void fun()
{
   int n,a,b,m;
   cin>>n>>a>>b;
   m=n/2;
   if((a<=m && b>m)|| (a==m+1 && b==m))
   {
       cout<<a<<" ";
       for(int i=n;i>0;i--)
       {
           if(i!=a && i!=b)
            cout<<i<<" ";
       }
       cout<<b<<endl;
   }
   else
    cout<<-1<<endl;
}
int main()
{
    int t=1; cin>>t;
    while(t--) fun();
}