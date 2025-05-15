#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
    int t = 1;
    while(t--) {
        int a, b, c; cin>> a>> b>> c;
        int q; cin>> q;
        vector<int> usb, ps;
        for(int i = 0; i < q; i++) {
            int n; cin>> n;
            string s; cin>> s;
            if(s == "USB") usb.push_back(n);
            else ps.push_back(n); 
        }
        sort(usb.rbegin(), usb.rend());
        sort(ps.rbegin(), ps.rend());
        int cnt = 0, prize = 0;
        
        while(a && !usb.empty()) a--, cnt++, prize += usb.back(), usb.pop_back();
        while(b && !ps.empty()) b--, cnt++,  prize += ps.back(), ps.pop_back();
        vector<int> com; 
        for(auto &it: usb) com.push_back(it);
        for(auto &it: ps) com.push_back(it);
        sort(com.begin(), com.end());
        int x = com.size();
        c = min({c, x});
        for(int i = 0; i < c; i++) cnt++, prize += com[i];
        cout << cnt << " " << prize << endl;
    }
    return 0;
}
