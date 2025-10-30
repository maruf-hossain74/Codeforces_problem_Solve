#include<bits/stdc++.h>
using namespace std;
string ans;
bool dfs(string s, int len, int a, int b,int c){
    int x = 0, y = 0, z = 0;
    for(int i = 1; i < len; i++) {
        if(s[i-1] == '0' && s[i] == '0') x++;
        if(s[i-1] == '0' && s[i] == '1') y++;
        if(s[i-1] == '1' && s[i] == '0') y++;
        if(s[i-1] == '1' && s[i] == '1') z++;
    }
    if(x > a || y > b || z > c ) return false;
    else if(x == a && y == b && z == c){
        ans = s;
        return true;
    }
    else {
        if(dfs(s+"1", len+1, a, b, c)){
            return true;
        }
        if(dfs(s+"0", len+1, a, b, c)){
            return true;
        }
    }
    return false;
}
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    ans = "";
    if(dfs("", 0, a, b, c)) cout << ::ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
