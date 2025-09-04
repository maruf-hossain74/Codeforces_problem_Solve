#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n+1];
        for(int i=0; i<n; i++)
            cin>>A[i];
            A[n]=0;
        int flag=0;
        for(int i=1,k=n-1; i<=n; i++)
        {
            for(int j=0;j<A[i-1]-A[i];j++,k--)
            {
                if(i!=A[k])
                {
                	flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
