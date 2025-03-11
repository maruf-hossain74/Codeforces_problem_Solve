#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,d,m,t=0;
    cin>>n>>d;
    long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cin>>m;
	sort(a,a+n);
	for(int i=0;i<n&&i<m;i++)t=t+a[i];
	if(m>n)t=t-((m-n)*d);
	cout<<t;
}
