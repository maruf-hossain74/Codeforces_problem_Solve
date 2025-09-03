#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    for(long i=0; i*a<=c;i++)
    {
            if((c-(i*a))%b==0)
            {
                flag=1;
                break;
            }
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
