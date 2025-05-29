#include<bits/stdc++.h>
using namespace std;
int t; 
int main(){
	cin>>t;
	while(t--){
		int n,cnt=0;string s;
		cin>>n>>s;
		for(int i=1;i<=n;i++){
			if(s[i-1]=='(')cnt++;
		}cout<<n/2+cnt*2<<endl;
	}
	return 0;
}
