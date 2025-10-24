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
        string s; cin>> s;
        int n = s.size();
        bool flag = false;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n-1; i++) {
            if(s[i] == '1' && s[i+1] == '0') cnt1++;
            if(s[i] == '0' && s[i+1] == '1') cnt2++;
        }
        if(cnt1 + cnt2 == 0) cout << 1 << endl;
        else if(cnt1 == 0 && cnt2 == 1) cout << 1 << endl;
        else if(cnt1 == 1 && cnt2 == 0) cout << 2 << endl;
        else cout << cnt1 + cnt2 << endl;
    }
	return 0;
}
