#include<bits/stdc++.h>
using namespace std;
const int N = 110;
#define int long long
string stand = "9999999999999";
void solve() {
    int a; string b;
    cin >> a >> b;
    int c = (b.size() - 1);
    if(stand.find(b) != -1) c++;
    cout << a * c << '\n';
}
signed main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
			     	  	 	 	 	 	  	      	
