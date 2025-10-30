#include <iostream>
 
using namespace std;
int p[6][3]={0,1,2,1,0,2,1,2,0,2,1,0,2,0,1,0,2,1};
int main()
{
int n,x;
cin>>n>>x;
 
cout<<p[n%6][x];
 
}
