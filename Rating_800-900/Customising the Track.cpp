#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0LL);
        sum %= n;
        cout << (int) (n - sum) * sum << "\n";
    }
}
