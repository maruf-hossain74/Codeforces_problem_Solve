#include<bits/stdc++.h>
using namespace std;
#define int int64_t
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
    while(t--) {
        int n, k, b, s; cin>> n>> k>> b>> s;
        int A[n];
        A[0] = b * k;
        s -= A[0];
        if(s<0) cout << -1 << endl;
        else {
            for(int i = 0; i < n; i++) {
                int mn = min({k-1, s});
                if(i == 0) A[0] += mn;
                else {
                    A[i] = mn;
                }
                s -= mn;
            }
            if(s > 0) cout << -1 << endl;
            else {
                for(int i = 0; i < n; i++) cout << A[i] << " ";
                cout << endl;
            }
        }
    }
}
