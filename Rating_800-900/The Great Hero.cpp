#include "bits/stdc++.h"
using namespace std;
#define int long long

bool comp(pair<int,int> a, pair<int,int> b)
{
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

signed main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int A, B, n;
        cin >> A >> B >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < n; i++) {
            a[i] = v[i].first;
            b[i] = v[i].second;
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int hit = (b[i] + A - 1) / A;
            int los = (B + a[i] - 1) / a[i];
            if (hit > los) {
                ok = false;
                break;
            }
            B -= hit * a[i];
        }
        if (ok) puts("YES");
        else puts("NO");
    }
}
