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
        int n; cin>> n;
        int A[n];
        vector<int> odd, even;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            if(i % 2) odd.push_back(A[i]);
            else even.push_back(A[i]);
        }
        int gcodd = odd[0], gceven = even[0];
        for(auto &it: odd) gcodd = __gcd(it, gcodd);
        for(auto &it: even) gceven = __gcd(it, gceven);
        if(gceven == 1 && gcodd == 1) cout << 0 << endl;
        else {
            bool flag1 = true, flag2 = true;
            for(auto &it: even) if(it % gcodd == 0) flag1 = false;
            for(auto &it: odd) if(it % gceven == 0) flag2 = false;
            if(flag1) cout << gcodd << endl;
            else if(flag2) cout << gceven << endl;
            else cout <<  0 << endl;
        }
    }
	return 0;
}
