#include <bits/stdc++.h>
#define int                long long int
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define fastIO             ios::sync_with_stdio(false); cin.tie(NULL);
#define ull                unsigned long long int
#define all(v)             v.begin(),v.end()
#define print(v)           for(auto x : v) cout << x << " "; cout << endl;
#define init(arr, val)     memset(arr, val, sizeof(arr))
#define testcase(x)        cout << "Case " << x << ": "
using namespace std;

int solve(int x,int y,vector<vector<int>>&v){
    int mx = 0;
    while(x<v.size() && y<v.size()){
        if(v[x][y]<0){
            mx = max(mx,-v[x][y]);
        }
        // cout << x << " " << y  << v[x][y]<< endl;
        x++;y++;
    }
    return mx;
}

int32_t main() {
    fastIO;
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        int sum = 0;
        int zero = 0;
        for(auto &x : v){
            cin >> x;
        }

        map<int,int>m;
        m[0] = 0;
        int ans = 0;
        for(auto x : v){
            sum+=x;
            if(m.find(sum) != m.end()){
                ans++;
                m.clear();
                sum=0;
                m[0] = 0;
            }
            else{
                m[sum]++;
            }
        }
        cout << ans << endl;
    }
} 
