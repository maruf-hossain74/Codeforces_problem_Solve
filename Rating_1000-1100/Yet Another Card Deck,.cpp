#include<bits/stdc++.h>
#include <stdio.h>
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
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin >> t;
    while(t--) {
        deque<int> d;
        int n, q, x; cin>> n >> q;
        for(int i = 1; i <= n; i++) {
            cin>> x;
            d.push_back(x);
        }
        for(int i = 0; i < q; i++) {
            cin>> x;
            auto it = find(d.begin(), d.end(), x);
            if (it != d.end()) {
                cout << (it - d.begin() + 1) << " ";
                d.erase(it);
            }
            d.push_front(x);
            
        }
        cout << endl;
    }
	return 0;
}
