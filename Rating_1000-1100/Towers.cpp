#include <bits/stdc++.h>
using namespace std;
int main() {
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int n; cin>> n;
	    map<int,int> mp;
	    for(int i = 0; i < n; i++) {
	    	int x; cin>> x;
	    	mp[x]++;
	    }
	    int hei = 0;
	    int num = 0;
	    for(auto &it: mp) {
	    	hei = max({hei, it.second});
	    	num++;
	    }
	    cout << hei << " " << num << endl;
	}
	return 0;
}
