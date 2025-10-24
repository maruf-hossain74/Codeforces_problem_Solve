#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()  {
int t; cin>>t; while(t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v1(n * n);
        for(auto &it : v1){
            cin >> it;
        }
        sort(v1.begin(), v1.end());
        vector<int> v2(n * n);
        v2[0] = v1[0];
        for(int i = 1; i < n; i++){
            v2[i] = v2[i - 1] + c;
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                v2[i * n + j] = v2[(i - 1) * n + j] + d;
            }
        }
        sort(v2.begin(), v2.end());
        if(v1 == v2) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
} 
