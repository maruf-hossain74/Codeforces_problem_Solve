#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t,n,i,sum;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int a[n];
  sum=0;
  for(i=0;i<n;i++)
  {
   cin>>a[i];
   sum+=a[i];
  }
  if(sum==0){cout<<"NO"<<endl;continue;}

  cout<<"YES"<<endl;
  sort(a,a+n);
  if(sum>0)reverse(a,a+n);
  for(i=0;i<n;i++)
   cout<<a[i]<<" ";
  cout<<endl;
 }
}
