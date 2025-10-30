#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
signed main(){
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		string a,b;cin>>a>>b;
		set<char> s;
		for(int i=0;i<a.size();i++){
			if(a[i]!=b[i]) s.insert(a[i]);
		}
		int idx=0;
		int f[30];
		for(auto it=s.begin();it!=s.end();it++){
			f[*it-'a']=idx++;
		}
		k=min(k,idx);
		LL ans=0;
		for(LL i=0;i<1<<idx;i++){
			if(__builtin_popcount(i)>k) continue;
			LL res=0,k=0;
			for(int j=0;j<n;j++){
				if(a[j]==b[j]||(a[j]!=b[j]&&(i>>f[a[j]-'a']&1))) k++;
				else{
					res+=k*(k+1)/2;
					k=0;
				}
			}
			res+=k*(k+1)/2;
			ans=max(ans,res);
		}
		cout<<ans<<endl;
	}
}
