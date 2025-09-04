#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c1=0,c2=0,p1,p2;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
    	cin>>A[i];
        if(A[i]%2==0)
        {
        	c1++;
            p1=i+1;
        }
        else
        {
        	c2++;
            p2=i+1;
        }
    }
    if(c2==1)
    cout<<p2<<"\n";
    else
    cout<<p1<<"\n";
    return 0;
}
