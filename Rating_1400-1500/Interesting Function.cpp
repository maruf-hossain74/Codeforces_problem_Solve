#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>> t;
    while(t--) {
        int n, k; cin>> n>> k;
        int ans = k-n;
        for(int i = 1; i <= 10; i++) {
            int x = pow(10, i);
            ans += (k/x - n/x);
        }
        cout << ans << endl;
    }
    return 0;
}
