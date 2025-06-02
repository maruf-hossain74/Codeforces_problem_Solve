#include<bits/stdc++.h>
using namespace std;
int n,m,a[500500],b[500500],ans,res;
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=m;++i){
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);
		ans+=a[n];
		a[n]--;
		res+=b[1];
		b[1]--;
	if(!b[1])b[1]=12345679;
	}
	cout<<ans<<" "<<res;
	return 0;
}
