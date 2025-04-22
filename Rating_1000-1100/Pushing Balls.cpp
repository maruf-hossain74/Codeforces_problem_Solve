#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		s.reserve(m);
		vector<bool> cd(m);
		bool g=1;
		for(int i = 0;i < n;i++){
			cin>>s;
			bool rd=false;
			for(int j = 0;j < m;j++){
				if(s[j]=='0')rd=cd[j]=1;
				else if(rd&&cd[j])g=false;
			}
		}
		cout<<(g?"YES":"NO")<<endl;
	}
}