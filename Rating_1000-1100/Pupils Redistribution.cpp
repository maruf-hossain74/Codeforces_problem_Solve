#include<bits/stdc++.h>
using namespace std;
int sum1[6],sum2[6];
int main()
{
	int n,x,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x,sum1[x]++;
	for(int i=1;i<=n;i++) cin>>x,sum2[x]++;
	for(int i=1;i<=5;i++){
		int t = sum1[i]+sum2[i];
		if(t&1) return puts("-1"),0;
		ans+=abs(sum1[i]-sum2[i])/2;
	}
	cout<<ans/2<<endl;
	return 0;
}
