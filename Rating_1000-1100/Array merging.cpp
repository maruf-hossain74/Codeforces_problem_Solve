#include<bits/stdc++.h>
using namespace std;

#define int int64_t

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;

    while(t--) {
        int n; cin>> n;
        int A[n], B[n], cnt = 1, ans = 1;
        map<int, int> mp1, mp2;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            if(i > 0) {
                if(A[i] == A[i-1]) {
                    cnt++;
                    if(i == n-1) {
                        mp1[A[i]] = max({mp1[A[i]], cnt});
                    }
                }
                else{
                    mp1[A[i-1]] = max({mp1[A[i-1]], cnt});
                    cnt = 1;
                    if(i == n-1)
                        mp1[A[i]] = max({mp1[A[i]], cnt});
                }
            }
            else if(n == 1) mp1[A[i]] = 1;
        }
        cnt = 1;
        for(int i = 0; i < n; i++) {
            cin>> B[i];
            if(i > 0) {
                if(B[i] == B[i-1]) {
                    cnt++;
                    if(i == n-1) {
                        mp2[B[i]] = max({mp2[B[i]], cnt});
                    }
                }
                else{
                    mp2[B[i-1]] = max({mp2[B[i-1]], cnt});
                    cnt = 1;
                    if(i == n-1)
                        mp2[B[i]] = max({mp2[B[i]], cnt});
                }
            }
            else if(n == 1) mp2[B[i]] = 1;
        }
        for(auto it: mp1) ans = max({ans, mp1[it.first] + mp2[it.first]});
        for(auto it: mp2) ans = max({ans, mp1[it.first] + mp2[it.first]});
        cout << ans << endl;
     }
	return 0;
}
