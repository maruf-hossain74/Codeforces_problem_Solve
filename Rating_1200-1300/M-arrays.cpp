#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"

int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n, k; cin>> n>> k;
        int A[n];
        map<int,int> mp;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            A[i] %= k;
            mp[A[i]]++;
        }
        int ans = mp[0] != 0;
        for(int i = 1; i <= k/2; i++) {
            if(mp[i] != 0 && mp[k-i] != 0) {
                int mn = min({mp[i], mp[k-i]});
                if(mn != 0) ans += mp[i] - mn + mp[k-i] - mn - (mp[i] != mp[k-i]) + 1;
            }
            else if(mp[i] != 0) {
                ans += mp[i];
            }
            else if(mp[k-i] != 0) {
                ans += mp[k-i];
            }
        }
        cout << ans << endl;
    }
	return 0;
}

		  		 				 		  	   		  						
