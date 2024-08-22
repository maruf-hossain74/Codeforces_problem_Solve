#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cout<<!(b+c&1)<<" "<<!(c+a&1)<<" "<<!(a+b&1)<<endl;
	}
}