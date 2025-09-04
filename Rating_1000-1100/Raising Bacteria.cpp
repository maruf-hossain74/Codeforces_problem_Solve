//sob somoy test case thake na.... but amar eita kheal thake na..!!!
//sodo sodo wrong ans khai

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int power(int n)
{
    int pass;
    for(int i=0; i<50; i++)
    {
        if(pow(2,i)>n)
        {
            pass=pow(2,i-1);
            break;
        }
    }
    return pass;
}
int main()
{
    int n,i; cin>>n;
    for(i=1;i<50;i++)
        {

            int les=power(n);
            n-=les;
            if(n==0)
                break;
        }
        cout<<i<<"\n";
    return 0;
}
