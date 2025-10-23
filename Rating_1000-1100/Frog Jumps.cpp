#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        string s;
        cin >> s;
        s = "0" + s + "A";
        int n = s.size(), lst = 0, fst = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != 'R') lst = i;
            else {
                lst = i;
                ans = max({ans, lst - fst});
                fst = i;
            }
            ans = max({ans, lst - fst});
        }
        cout << ans << endl;
    }
	return 0;
}
