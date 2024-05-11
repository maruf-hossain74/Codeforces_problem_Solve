#include<bits/stdc++.h>

using namespace std;
#define int int64_t
#define ll long long int
#define mod 1000000007
int power(int a, int b) {
    if(b == 0) return 1;
    int value = power(a, b/2);
    if(b % 2 == 0) return (value * value) % mod;
    else return (value * value * a) % mod;
}
int t = 1;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin >> t;
    while(t--) {
        const int maxn=200005;
        int n,k,q,d,a[maxn],b[maxn];
        int v[maxn];
        cin>>n>>k>>q;
		for(int i=1;i<=k;++i) cin>>a[i];
		for(int i=1;i<=k;++i) cin>>b[i];
		for(int i=1;i<=k;++i)
			v[i]=(a[i]-a[i-1])/(b[i]-b[i-1]);

		for(int i=1;i<=q;++i) {
			cin>>d;
			int pos=lower_bound(a+1,a+1+k,d)-a;
			cout<<b[pos-1]+((d-a[pos-1])*(b[pos]-b[pos-1]))/(a[pos]-a[pos-1])<<' ';
		}
		cout<<endl;
    }
	return 0;
}
