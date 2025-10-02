
#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    while(t--) {
        int n, k;
        cin>> n>> k;
        int x = n ^ k, bit = 0;
        while(x % 2 == 0) bit++,x >>= 1;
        int ans = 1 << bit;
        cout << ans << endl;
    }
	return 0;
}
