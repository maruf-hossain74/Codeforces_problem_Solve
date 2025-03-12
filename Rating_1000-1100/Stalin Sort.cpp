#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[114514], t, n;
signed main()
{
	for(cin>>t;t;t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		int mini=1145141919810;
		for(int i=1;i<=n;i++)
		{
			int tmp=0;
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]>a[i])tmp++;
			}
			mini=min(mini,tmp+i-1);
		}
		cout<<mini<<"\n";
	}
}