#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int t = 1;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>> t;
    while(t--) {
        int n; cin>> n;
        int k = -1;
        int x = n-1;
        while(x != 0) {
            k++;
            x/=2;
        }
        int terget = pow(2,k);
        for(int i = 1; i < n; i++) {
            if(i == terget) {
                cout << 0 << " "<< terget << " ";
            }
            else cout << i << " ";
        }
        cout << endl;
        
    }
    return 0;
}
