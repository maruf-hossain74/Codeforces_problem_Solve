#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>> n;
    string s; cin>> s;
    if(n > 26) cout << -1 << endl;
    else {
        map<char,int> mp;
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int ans = 0;
        for(auto it: mp) ans += it.second -1;
        cout << ans << endl;
    }
    return 0;
}
