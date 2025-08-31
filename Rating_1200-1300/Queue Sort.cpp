#include <bits/stdc++.h>
#include<fstream>
#define int int64_t
using namespace std;

vector<vector<int>> sp(17, vector<int> (0));
void creat(vector<int> &v) {
	for(auto &it: v) sp[0].push_back(it);
	for(int i = 1; i < 17; i++) {
		int el = 1<<(i-1); el++;
        int n = sp[i-1].size();
		for(int j = 0; j <= max({int(0), n - el}); j++) {
			int mx = -10;
			for(int k = j; k < min({n, el+j}); k++) mx = max({mx, sp[i-1][k]});
			sp[i].push_back(mx);
		}
	}
}

int query(int l, int r) {
	int ele = r-l+1;
	int in = log2(ele);
	int first = sp[in][l];
	int second = sp[in][r - (1<<in) + 1];
	int mx = max({first, second});
	//cout << in << " ";
	return mx;
}
int32_t main() {
	int t = 1;
	cin>> t;
	while(t--) {
		int n; cin>> n;
		vector<int> v(n);
		for(auto &it: v) cin>> it;
		int ans = 1;
		int mn = *min_element(v.begin(), v.end());
		vector<int> vv;
		bool flag = false;
		for(int i = 0; i < n; i++) {
			if(v[i] == mn && !flag) {
				flag = true;
				ans = i;
			}
			if(flag) vv.push_back(v[i]);
		}
		bool res = true;
		for(int i = 1; i < vv.size(); i++) {
			if(vv[i-1] > vv[i]) {
				res = false;
				break;
			}
		}

		//sp.assign(17, vector<int> (0));
		//creat(v);
		// map<int,int> left;
		// for(int i = 0; i < n; i++) {
		// 	if(left[v[i]] == 0) left[v[i]] = i+1;
		// }
		// map<int,int> right;
		// for(int i = n-1; i >= 0; i--) {
		// 	if(right[v[i]] == 0) right[v[i]] = i+1;
		// }
		// //if(t == 2) for(auto &i: left) ;
		// bool flag = false; 
		// for(auto &i: left) {
		// 	int mx = query(i.second-1, right[i.first]-1);
		// 	//cout << i.first << " " << i.second << " " << right[i.first] << " " << mx << endl;
		// 	if(mx > i.first) {
		// 		flag = true;
		// 		break;
		// 	}
		// } cout << endl;
		// for(int i = n-1; i > 0; i--) {
		// 	if(v[i] >= v[i-1]) ans++;
		// 	else break;
		// }

		if(!res) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
