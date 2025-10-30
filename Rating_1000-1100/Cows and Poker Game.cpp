#include<bits/stdc++.h>
using namespace std;
int n,k,l;
char c;
main(){
    for(cin>>n;n--;)cin>>c,c=='A'?k++:c=='I'?l++:0;
    cout<<(l==0?k:l==1?1:0);
}
