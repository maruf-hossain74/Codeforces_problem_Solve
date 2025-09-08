#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    int r=sqrt(x);
    for(int i=1;( i<=r && i<=n); i++)
    {
        if(x%i==0 && (x/i<=n))
            count++;
    }
    
    if(r*r==x && count!=0)
            cout<<(count*2)-1<<"\n";
    else
            cout<<(count*2)<<"\n";
    return 0;
}
