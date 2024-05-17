#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"

int t = 1;
int32_t main(){
	//ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n, k, x; cin>> n>> k>> x;
        int A[n];
        for(int i = 0; i < n; i++) {
            cin>> A[i];
        }
        if(n == 1) cout << 1 << endl;
        else {
            sort(A, A+n);
            
            vector<int>v;
            for(int i = 1; i < n; i++) {
                if(A[i] - A[i-1] > x) v.push_back((A[i] - A[i-1] - 1) / x);
            }
            int ans = v.size();
            sort(v.begin(), v.end());
            for(int i = 0; i < v.size(); i++) {
                k -= v[i];
                if(k >= 0) ans--;
                else break;
            }
            
            cout << ans + 1 << endl;
        }
     } 
	return 0;
}

		  		 				 		  	   		  						
