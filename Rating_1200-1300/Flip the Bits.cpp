#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"

int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n; cin>> n;
        string s1, s2; cin>> s1 >> s2; 
        int z = 0, o = 0;
        bool ans = true;
        for(int i = 0; i < n; i++) s1[i] == '0'?z++: o++;
        for(int i = n-1, x = 0; i >= 0; i--) {
            if(s1[i] != s2[i] && x%2==0) {
                if(z != o) {
                    ans = false;
                    break;
                }
                else x++;
            }
            else if(s1[i] == s2[i] && x%2) {
                if(z != o) {
                    ans = false;
                    break;
                }
                else x++;
            }
            s1[i] == '0'?z--:o--;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}

		  		 				 		  	   		  						
