#include<bits/stdc++.h>
using namespace std;
int T,n,m,k,x,y,op,t;
int main(){
	cin>>T;while(T--){
		cin>>n>>m>>k>>x>>y;
		op=(x+y)&1,t=0;
		while(k--){
			cin>>x>>y;
			if(op==(x+y&1))t=1;
		}
		cout<<(t?"NO\n":"YES\n");
	}
	return 0;
}
