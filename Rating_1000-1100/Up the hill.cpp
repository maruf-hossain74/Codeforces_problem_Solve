#include<bits/stdc++.h>
using namespace std;
int a,b,n,i=1;
main(){
    cin>>a>>b;n=a+b+1;
    while(a--)cout<<i++<<" ";
    while(b--)cout<<n--<<" ";
    cout<<n;
}
