#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main() {
    fastread();
    
    ll t; 
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        
        for (auto &x : v) 
            cin >> x;

        ll grp = 0, now = v[0], flag = 1;

        for (int i = 0; i < n; i++) {
            now &= v[i];
            if (now == 0) {
                grp++;
                flag = 0;
                if (i != n - 1) {
                    flag = 1;
                    now = v[i + 1];
                }
            }
        }

        if (now != 0) {
            if (grp == 0) grp++;
            cout << grp << endl;
        } else {
            if (flag) grp++;
            cout << grp << endl;
        }
    }
}
