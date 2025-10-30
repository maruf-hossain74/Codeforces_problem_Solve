#include <iostream>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long  n,a,b,c,d;
cin>>n;
cin>>a>>b>>c>>d;

cout<<abs(min(min(a,b),min(n+1-b,n+1-a))-min(min(c,d),min(n+1-c,n+1-d)))<<endl;
}}
