#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=2*n;i++)
	{
		if(2*n+i<=k) cout<<2*n+i<<" ";
		if(i<=k) cout<<i<<" ";
	}
}
