#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    int t;

    cin >> t;
    while (t--)
    {
        ll n, m, i, j, k, l = 0, ans = 0;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (a[0] == a[n - 1])
        {
            cout << "-1" << endl;
            continue;
        }
        k = 0;
        for (j = 1; j < n; j++)
        {
            k = __gcd(k, (a[j] - a[0]));
        }
        cout << k << endl;
    }
}
