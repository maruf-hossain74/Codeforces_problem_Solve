#include<bits/stdc++.h>
using namespace std;
int n,t,k,x[201],ans;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>x[1];
		ans=x[1];
		for(int i=2;i<=k;i++)cin>>x[i];
		for(int i=2;i<=k;i++)
			ans=max(ans,(x[i]-x[i-1])/2+1);
		ans=max(ans,n-x[k]+1);
		cout<<ans<<endl;
	}
}
