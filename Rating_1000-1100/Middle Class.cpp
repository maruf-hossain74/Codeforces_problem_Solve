#include <bits/stdc++.h>
#include<fstream>
#define int int64_t
using namespace std;
int32_t main() {
	int t = 1;
	cin>> t;
	while(t--) {
		int n, k; cin>> n>> k;
		vector<int> v(n);
		for(auto &it: v) cin>> it;
		sort(v.rbegin(), v.rend());
		int sum = 0, ans = 0;
		for(int i = 0; i < n; i++) {
			sum += v[i];
			if(sum/(i+1) >= k) ans++;
			else break;
		}
		cout << ans << endl;
	}
	return 0;
}
