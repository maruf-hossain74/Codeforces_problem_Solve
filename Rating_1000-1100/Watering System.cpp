#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,i;
	cin>>n>>a>>b;
	int m[n],t=0;
	for ( i=0;i<n;i++) {cin>>m[i]; t+=m[i];}
	sort(m+1,m+n);
	i=n-1;
	while (i>0&&b>(1.0*a*m[0])/t) t-=m[i--];
	cout<<(n-1)-i;
}
