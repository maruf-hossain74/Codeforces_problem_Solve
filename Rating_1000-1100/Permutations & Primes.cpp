#include<iostream>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
int n;
cin >> n;
for(int i=3;i<=n;i++)
{
if(i%2==1) cout << i << " " ;
}
cout << 1 << " " ;
for(int i=n;i>= 2 ;i--)
{
if(i%2==0) cout << i << " " ;
}
cout << endl ;
}
}
