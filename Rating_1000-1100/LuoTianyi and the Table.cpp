#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>> t; while(t--) {
        int n, m; cin>> n>> m;
        vector<int> v(n*m);
        for(auto &it: v) cin>> it;
        sort(v.begin(), v.end());
        if(n == 1 || m == 1) {
            cout << (v.back() - v.front()) * (n*m-1) << endl;
            continue;
        }
        int mx = v.back() - v.front();
        int mn = max({v.back()-v[1], v[n*m-2]-v.front()});
        int x = max({n, m}), y = min({n,m});
        cout << (x-1)*y*mx + mn*(y-1) << endl;
    }
    return 0;
}
