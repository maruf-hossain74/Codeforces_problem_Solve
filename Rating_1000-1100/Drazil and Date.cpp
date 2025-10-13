#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s;
	cin>>a>>b>>s;
	cout<<(((s-a-b)%2==0&&abs(a)+abs(b)<=s)?"YES":"No");
}
