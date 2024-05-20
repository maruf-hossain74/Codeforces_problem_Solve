#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
#define chars "abcdefghijklmnopqrstuvwxyz"
int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
       int n; string s; cin>> n>> s;
       int ans = n;
       for(int i = 0; i < 26; i++) {
            int l = 0, r = n-1, cnt = 0;
            while(l <= r) {
                if(s[l] == s[r]){
                    l++;
                    r--;
                }
                else if(s[l] == 'a' + i) {
                    cnt++;
                    l++;
                }
                else if(s[r] == 'a' + i) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = n;
                    break;
                }
            }
            ans = min({cnt, ans});
       }
       if(ans == n) cout << -1 << endl;
       else cout << ans << endl;
    } 
	return 0;
}

		  		 				 		  	   		  						
