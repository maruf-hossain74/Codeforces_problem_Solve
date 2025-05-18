#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int n, m; cin>> n>> m;
    vector<pair<int,int>> vp ; 
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x, y; cin>> x>> y;
        sum += x;
        vp.push_back({x-y, x}); 
    }
    if(sum <= m) {
        cout << 0 << endl;
        return 0; 
    }
    sort(vp.rbegin(), vp.rend());
    // for(auto &it: vp) cout << it.first << " " << it.second << endl;
    // cout << sum << endl;
    int ans = 0;
    for(auto &it: vp) {
        sum -= it.first;
        ans++;
        if(sum <= m) break;
    }
    if(sum <= m) cout << ans << endl;
    else cout << -1 << endl;
}