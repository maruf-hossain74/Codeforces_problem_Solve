#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,m,a[1000001];
main(){
	cin>>t;while(t--){
		scanf("%d",&n);int ans=0;
		for(int i=1;i<=n;i++)scanf("%d",&a[i]),ans+=max(0ll,a[i]-a[i-1]);
		cout<<ans-1<<endl;
	}
} 
