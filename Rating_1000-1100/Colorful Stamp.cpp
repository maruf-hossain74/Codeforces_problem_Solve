#include<bits/stdc++.h>
using namespace std;
int t,n,a,b,w;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>s;
		s=s+'W';
		int f=1;
		a=b=0;
		for(int i=0;i<=n;++i){
			if(s[i]=='R')a=1;
			else if(s[i]=='B')b=1;
			else if(a>0&&b>0)a=0,b=0;
			else if(a==0&&b==0);
			else{
				cout<<"NO\n";
				f=0;
				break;
			}
		}
		if(f)cout<<"YES\n";
	}
}
