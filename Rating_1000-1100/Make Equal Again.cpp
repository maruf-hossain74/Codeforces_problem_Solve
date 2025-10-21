#include<bits/stdc++.h>
#define int int64_t
using namespace std;

int t = 1;
int32_t main() {
    
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int sum = 0;
        int A[n], st;
        bool star = true;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0 ; i < n; i++) {
            cin>>A[i];
            if(i == 0) {
                st = A[0];
            }
            if(star && A[i] == st) cnt1++;
            else star = false;
        }
        int en = A[n - 1];
        for(int i = n - 1; i >= 0; i--) {
            if(A[i] == en) cnt2++;
            else break;;
        }
        if(en == st) {
            if(n - cnt1 - cnt2 < 0) {
                cout<<0<<endl;
            }
            else {
                cout<<n - cnt1 - cnt2<<endl;
            }
        }
        else {
            int k;
            if(cnt1> cnt2) k = cnt1;
            else k = cnt2;
            cout<<n - k<<endl;
        }
    }
    return 0;
}
