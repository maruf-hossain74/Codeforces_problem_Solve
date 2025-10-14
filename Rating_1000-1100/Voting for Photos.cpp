#include<bits/stdc++.h>
using namespace std;
int n,a,m,b[1000001],k;
int likes(int n){
    while(n--){cin>>a;b[a]++;if(b[a]>m)m=b[a],k=a;}
    return k;
}
int main(){
    cin>>n;
    cout<<likes(n);
}
