#include <iostream>
using namespace std;
int x,p,a;
main()
{
    cin>>x;
    while(cin>>x)
    {
    a+=(2-p)*x;
    p=x;
    }
    cout<<max(a-1,0);
    return 0;
}
