#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
#include<string>
#include<map>

using namespace std;

int main()
{

    long long int a,b,c,d,l=0,i=0,j=0,n=0,k=0,t;
    cin>>t;
//  fputs("\033[A\033[2K\033[A\033[2K",stdout);
    if(t>0 && (t+1)%2==0)
     cout<<(t+1)/2;
    else if(t>0)
      cout<<(t+1);
    else
      cout<<0;
    return 0;
}
