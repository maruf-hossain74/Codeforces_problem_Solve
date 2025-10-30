
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
const int sz = 1e5 + 5, mod = 1e9 + 7;
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	std::vector<int> v(n + 1);
	for(int i = 2; i <= n; i++) {
		int a, b; cin >> a >> b;
		v[a]++;
		v[b]++;
	}
	int ans = 0;
	for(int i = 1; i <= n; i++) ans += v[i] == 1;
	cout << ans << "\n";
	return 0; 
}
