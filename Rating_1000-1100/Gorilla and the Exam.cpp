//maruf_hossain_jkkniu
#include <bits/stdc++.h>
using namespace std;
void testCase() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &i : a) cin >> i;
  map<int, int> mp;
  for (int i : a) mp[i]++;
  vector<int> cnts;
  for (auto [x, y] : mp) {
    cnts.push_back(y);
  }
  sort(cnts.begin(), cnts.end());
  int ans = cnts.size();
  for (int i = 0; i < cnts.size(); i++) {
    if (cnts[i] <= k) {
      ans--;
      k -= cnts[i];
    }
  }
  cout << max(ans, 1) << endl;
}
int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    testCase();
  }
}
