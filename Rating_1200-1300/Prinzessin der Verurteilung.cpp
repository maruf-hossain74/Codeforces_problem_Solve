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
       int n; cin>> n;
       string s; cin>> s;
       set<string> st;
       for(int i = 0; i< n; i++) {
            string k = "";
            for(int j = 0; j < 3, i+j < n; j++) {
                k += s[i+j];
                st.insert(k);
            }
       }
       bool ans = false;
       for(int i = 1; i < 4; i++) {
            string x(i, 'a');
            while(true) {
                if(st.count(x) == 0) {
                    cout << x << endl;
                    ans = true;
                    break;
                }
                int id = i-1;
                while(id >= 0 && x[id] == 'z') {
                    x[id] = 'a';
                    id--;
                }
                if(id < 0) break;
                x[id]++;
            }
            if(ans) break;
        }
    } 
	return 0;
}

		  		 				 		  	   		  						
