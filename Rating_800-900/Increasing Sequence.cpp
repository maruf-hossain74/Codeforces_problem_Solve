// Coding C++ mobile app
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>> n>> k;
    int x, lst, ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(i == 0) lst = x;
        else {
            if(x <= lst) {
                int xx = lst - x;
                xx/=k;
                xx++;
                ans += xx;
                xx*=k;
                lst = x+xx;
            }
            else lst = x;
        }
    }
    cout << ans << endl;
    return 0;
}