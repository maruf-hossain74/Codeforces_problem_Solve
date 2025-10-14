#include<bits/stdc++.h>
using namespace std;
int n,a[400000],mn=1e9;
string s;
int main()
{
	cin>>n>>s>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(s[i-1]=='R'&&s[i]=='L')
			mn=min(mn,(a[i]-a[i-1])/2);
	}
	if(mn==1e9)
		cout<<-1;
	else
		cout<<mn;
}
