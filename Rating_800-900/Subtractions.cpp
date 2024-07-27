#include<bits/stdc++.h>
using namespace std;
int n,a,b,k;
main(){
    for(cin>>n;n--;cout<<k<<endl){
        cin>>a>>b;k=0;
        while(b){
        if(b<a)swap(a,b);
        k+=b/a;
        b-=b/a*a;
    }
}
}
