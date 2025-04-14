#include<bits/stdc++.h>
using namespace std;
string n,m,c;
int main(){
    cin>>n>>m;
    sort(n.begin(),n.end());
    int l=0;
    while(n[l]=='0'&&l<n.size()-1)l++;
    c=n[l]+n.substr(0,l)+n.substr(l+1);
    if(c==m)cout<<"OK";
    else cout<<"WRONG_ANSWER";
	return 0;
}
