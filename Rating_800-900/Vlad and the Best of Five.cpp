#include<bits/stdc++.h>
 
using namespace std;
#define int int64_t

int t = 1;
int32_t main(){
	//ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    cin >> t;
    while(t--) {
        string s;
        cin>>s;
        map<char, int > mp;
        char ans;
        int mx = -1;
        for(int i = 0 ; i < s.size() ; i++) {
 
            mp[s[i]]++;
            if(mp[s[i]] > mx) {
                mx = mp[s[i]];
                ans = s[i];
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
 
