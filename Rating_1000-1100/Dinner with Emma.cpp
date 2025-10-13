#include<bits/stdc++.h>
using namespace std;
int n,m,j,x;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int p=2147483647;
		for(int j=1;j<=m;j++) cin>>x,p=min(p,x);
		j=max(j,p);
	}
	cout<<j<<endl;
	return 0;
}
