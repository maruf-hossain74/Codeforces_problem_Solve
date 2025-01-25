#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //13 is the special number
    if(n==13 || n%2==0)
    cout<<4<<" "<<n-4<<"\n";
    else
    cout<<9<<" "<<n-9<<" \n";
    return 0;
}
