#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f,t,n,k,s=INT_MIN;
	cin>>n>>k;
	while(n--)
	{
		cin>>f>>t;
		if(k<t) f-=t-k;
		s=max(s,f);
	}
	cout<<s;
}
