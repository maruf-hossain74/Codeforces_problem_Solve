/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/
 
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
int power(int a, int b) {
    if(b == 0) return 1;
    int value = power(a, b/2);
    if(b % 2 == 0) return (value * value) % mod;
    else return (value * value * a) % mod;
}
int t = 1;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin >> t;
    while(t--) {
        int n; cin>> n;
        string s; cin>> s;
        set<char>st;
        int ans = 0;
        for(auto it: s) {
            st.insert(it);
            ans += st.size();
        }
        cout << ans << endl;
    }
}
