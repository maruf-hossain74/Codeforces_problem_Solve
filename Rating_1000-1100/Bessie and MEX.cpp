#include<bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
    while(t--){
    int n; cin>>n;

    int mex=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a<0) cout<<-a+mex<<' ';
        else{
            cout<<mex<<' ';
            mex += a;
        }
    }
    cout<<'\n';

}
}
