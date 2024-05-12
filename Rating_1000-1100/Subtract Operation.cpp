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
        int n, a;
    	cin >> n >> a;
    	vector<int> v(n);
    	for(int& x : v) cin >> x;
    	bool ans = false;
    	if(n == 1) ans = (v[0] == a);
    	else {
    		sort(v.begin(), v.end());
    		int i = 0;
    		int j = 1;
    		while(j < n and i < n) {
    			if(v[i] + abs(a) == v[j]) {
    				ans = true;
    				break;
    			}
    			else if(v[i] + abs(a) < v[j]) ++i;
    			else ++j;
    		}
    	}
    	cout << (ans? "YES" : "NO") << '\n';
    }
	return 0;
}
