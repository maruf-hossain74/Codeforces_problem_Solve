#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,x=0; 
	cin>>n>>k; 
	char a;
	for(i=0;i<n;i++)
	{
		cin>>a; 
		if(a=='#')
		{
			x++;
			if(x==k) break;
		} 
		else x=0;
	}
	cout<<(x==k?"NO":"YES");
	return 0;
}