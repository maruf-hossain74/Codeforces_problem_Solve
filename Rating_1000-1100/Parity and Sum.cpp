#include <bits/stdc++.h>
#define int 		       long long int
#define yes 		       cout << "YES" << endl
#define no  		       cout << "NO" << endl
#define HelloWorld         ios::sync_with_stdio(false); cin.tie(0);
#define ull                unsigned long long int
#define all(v)             v.begin(),v.end()
#define print(v)           for(auto x : v) cout << x << " "; cout << endl;
#define init(arr, val)     memset(arr, val, sizeof(arr))
using namespace std;

const int mod = 1e9+7;

int calculate(int n){
	int upper = n*(n+1)*(2*n + 1);
	int sum = upper/6;
	return sum;
}


string fun(string s , string t,string x){
	string ans = "";
	for(auto x : x){
		if(x=='0') ans+=s;
		else ans+=t;
	}
	return ans;
}


int32_t main() {
	HelloWorld
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<int>odd;
    	vector<int>even;
    	for(int i=0;i<n;i++){
    		int x; cin >> x;
    		if(x&1){
    			odd.push_back(x);
    		}
    		else{
    			even.push_back(x);
    		}
    	}
    	if(odd.size()==0 || even.size()==0){
			cout << 0 << endl;
			continue;
		}
		sort(all(odd));
		sort(all(even));
		int ans1 = 0;
		int val = odd[odd.size()-1];
		for(auto x : even){
			if(x>val){
				ans1++;
			}
			val+=x;
			ans1++;
		}
		sort(all(even),greater<int>());
		int ans2 = 0;
		val = odd[odd.size()-1];
		for(auto x : even){
			if(x>val){
				ans2++;
			}
			val+=x;
			ans2++;
		}
		cout << min(ans1,ans2) << endl;
    }
} 
