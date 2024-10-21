#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string a,b;
	cin>>a>>b;
	for(int i=1;i<a.size();i++)
	{
		if(a[i]=='1'&&b[i]=='1'&&a[i-1]=='0'&&b[i-1]=='0')
		{
			puts("YES");return ;
		}
	}
	puts("NO");
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)solve();
}
