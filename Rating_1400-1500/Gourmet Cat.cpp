
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c; cin>> a>> b>> c;
    int aa = a/3, bb = b/2, cc = c/2;
    int mn = min({aa, min({bb, cc})});
    int ans = mn*7;
    a -= mn*3;
    b -= mn*2;
    c -= mn*2;
    vector<char> v = {'b', 'a', 'a', 'b', 'c', 'a', 'c'};
    vector<char> rep;
    for(int i = 0; i < 10; i++) {
        for(auto &it: v) rep.push_back(it);
    }
    //cout << a << b << c << endl;
    int mx = 0;
    for(int i = 0; i < 7; i++) {
        int cnt = 0;
        int x = a, y = b, z = c;
        for(int j = i; j < rep.size(); j++) {
            char it = rep[j];
            if(x == 0 && it == 'a') {
                mx = max({mx, cnt});
                break;
            }
            else if(y == 0 && it == 'b') {
                mx = max({mx, cnt});
                break;
            }
            else if(z == 0 && it == 'c') {
                mx = max({mx, cnt});
                break;
            }
            else {
                if(it == 'a') x--;
                if(it == 'b') y--;
                if(it == 'c') z--;
                cnt++;
            }
        }
    }
    //cout << ans << endl;
    cout << ans + mx << endl;
    return 0;
}
