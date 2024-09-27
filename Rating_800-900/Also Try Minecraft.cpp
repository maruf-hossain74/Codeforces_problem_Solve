#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],l,r;
long long s[100001],t[100001];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=2;i<=n;i++)
		s[i]=s[i-1]+max(0,a[i-1]-a[i]);
	for(int i=n-1;i>=1;i--)
		t[i]=t[i+1]+max(0,a[i+1]-a[i]);
	while(m--)
	{
		cin>>l>>r;
		cout<<(l<r?s[r]-s[l]:t[r]-t[l])<<endl;
	}
}
