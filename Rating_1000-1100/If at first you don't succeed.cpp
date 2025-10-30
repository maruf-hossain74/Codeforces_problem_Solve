#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,s;
main(){
    cin>>a>>b>>c>>n;
    s=n-(a-c+b);
    cout<<(s<=0||c>a||c>b?-1:s);
}
