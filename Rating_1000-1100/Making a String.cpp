#include<bits/stdc++.h>

using namespace std;
int n,a[30];
int main(){
	cin>>n;
	for(int i=0;i<n;i+=1)cin>>a[i];
	sort(a,a+n);
	map<int,bool> f;
	for(int i=n-1;i>=0;i-=1){
	    while(f[a[i]] and a[i])a[i]--;
		f[a[i]]=1;
	}
	long long  ans=0;
	for(int i=0;i<n;i+=1)
	   ans+=a[i];
	cout<<ans<<endl;
}
