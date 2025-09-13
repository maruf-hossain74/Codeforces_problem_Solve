#include<bits/stdc++.h>
using namespace std;
 
const int N=2e5+5;
long long a[N],t,n,k,s;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>k;
		s=k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]*(n-i+1) < k) s++;
			k-=a[i];
		}
		cout<<s<<endl;
	}
	return 0;
}
