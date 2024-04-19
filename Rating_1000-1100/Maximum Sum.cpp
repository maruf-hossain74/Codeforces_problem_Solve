#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k; cin>> n>> k;
        int A[n],sum[n];
        for(int i = 0; i < n; i++) cin>> A[i];
        sort(A, A+n);
        for(int i = 0; i < n; i++) {
            if(i == 0) sum[i] = A[i];
            else sum[i] = sum[i-1] + A[i];
        }
        int ans = 0, fs = -1, val = 0;
        for(int i = n - k - 1; i < n; i++) {
            if(fs == -1) {
                ans = sum[i];
            }
            else {
                ans = max({ans, sum[i]-sum[fs]});
            }
            fs+=2;
        }
        cout << ans << endl;
    }
}
