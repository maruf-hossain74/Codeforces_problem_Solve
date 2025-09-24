#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    while(t--) {
        int n; cin >> n;
        int A[n], lcc = 1, sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            lcc = lcm(A[i], lcc);
        }
        for(int i = 0; i < n; i++) sum += lcc / A[i];
        if(sum >= lcc) cout << -1 << endl;
        else { for(int i = 0; i < n; i++) cout << lcc / A[i] << " "; cout << endl; }
    }
	return 0;
}
