#include<iostream>
using namespace std;
int main()
{
    long long n,t=0,a,b,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>a>>b>>x>>y;
		t=t+(x-a+1)*(y-b+1);
	}
	cout<<t;
}
