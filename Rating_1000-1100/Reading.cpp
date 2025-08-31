#include <bits/stdc++.h>
#include<fstream>
#define int int64_t
using namespace std;
int32_t main() {
	ifstream in("input.txt");
	ofstream out("output.txt");
	int n, k; in>> n>> k;
	vector<pair<int,int>> vp(n);
	for(int i = 0; i < n; i++) {
		in>> vp[i].first;
		vp[i].second = i+1;
	}
	vector<int> ans;
	sort(vp.rbegin(), vp.rend());
	for(int i = 0; i < k; i++) {
		ans.push_back(vp[i].second);
	}
	sort(ans.begin(), ans.end());
	out << vp[k-1].first << endl;
	for(auto &it: ans) out << it << " "; out << endl;
	return 0;
}
