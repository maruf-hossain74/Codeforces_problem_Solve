#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    while(t--) {
        int n; string s; cin>> n>> s;
        if(n%2) cout << "NO" << endl;
        else if(n == 2 && s[0] != s[1]) cout << "NO" << endl;
        else if(n == 2 && s[0] == s[1]) cout << "HR" << endl;
        else {
            int x = 0,y = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == 'N') y++;
                else if(s[i] == 'S') y--;
                else if(s[i] == 'E') x++;
                else if(s[i] == 'W') x--;
            }
            if(abs(x)%2 || abs(y)%2) cout << "NO" << endl;
            else {
                x/=2, y/=2;
                int W = 0, E = 0, N = 0, S = 0;
                if(!x && !y) {
                    if(s[0] == 'N' || s[0] == 'S') {
                        N = 1, S = 1;
                    }
                    else {
                        E = 1, W = 1;
                    }
                }
                if(y > 0) N = y;
                else if(y < 0) S=-y;
                if(x>0) E = x;
                else if(x<0) W = -x;
                for(int i = 0; i < n;i++) {
                    if(s[i]  == 'N' && N) {
                        cout << 'R';
                        N--;
                    }
                    else if(s[i]  == 'E' && E) {
                        cout << 'R';
                        E--;
                    }
                    else if(s[i]  == 'S' && S) {
                        cout << 'R';
                        S--;
                    }
                    else if(s[i]  == 'W' && W) {
                        cout << 'R';
                        W--;
                    }
                    else cout << 'H';
                }
                cout << endl;
            }
        }
        // else {
        //     map<char,int> mp;
        //     for(auto &it: s) mp[it]++;
        //     int a = mp['N'], b = mp['S'], c = mp['E'], d = mp['W'];
        //     int nss = min({mp['N'], mp['S']});
        //     int eww = min({mp['E'], mp['W']});
        //     int N = mp['N'] - nss;
        //     int S = mp['S'] - nss;
        //     int E = mp['E'] - eww;
        //     int W = mp['W'] - eww;
        //     if(S%2 || N%2 || E%2 || W%2) cout << "NO" << endl;
        //     else {
        //         bool nnn = false, sss = false, eee = false, www = false;
        //         if(b && a) {
        //             sss = true, nnn = true;
        //             a--, b--;
        //         }
        //         else if(c && d) {
        //             eee = true, www = true;
        //             c--, d--;
        //         }
        //         else {
        //             for(int i = 0; i < n;i++) {
        //                 if(i < n/2) cout << 'R';
        //                 else cout << 'H';
        //             }
        //             cout << endl;
        //             continue;
        //         }
        //         a/=2, b/=2,c/=2,d/=2;
        //         //cout << a << " " << b << " " << c << " " << d << endl;
        //         for(int i = 0; i < n; i++) {
        //             if((nnn || a > 0) && s[i] == 'N') {
        //                 cout << 'R';
        //                 if(!nnn)
        //                     a--;
        //                 nnn = false;
                        
        //             }
        //             else if((sss || b > 0) && s[i] == 'S') {
        //                 cout << 'R';
        //                 if(!sss)
        //                     b--;
        //                 sss = false;
                        
        //             }
        //             else if((eee || c > 0) && s[i] == 'E') {
        //                 cout << 'R';
        //                 if(!eee)
        //                     c--;
        //                 eee = false;
                        
        //             }
        //             else if((www || d > 0) && s[i] == 'W') {
        //                 cout << 'R';
        //                 if(!www)
        //                     d--;
        //                 www = false;
                        
        //             }
        //             else cout << 'H';
        //         } 
        //         cout << endl;
        //     }
        // } 
    }
	return 0;
}


            //     int NN = nss, SS = nss, EE = eww, WW = eww;
            //     N/=2, S/=2, E/=2, W/=2;
            //     for(int i = 0; i < n; i++) {
            //         if(NN > 0 && s[i] == 'S') {
            //             cout << 'R';
            //             NN--;
            //         }
            //         else if(SS > 0 && s[i] == 'S') {
            //             cout << 'R';
            //             SS--;
            //         }
            //         else if(EE > 0 && s[i] == 'E') {
            //             cout << 'R';
            //             EE--;
            //         }
            //         else if(WW > 0 && s[i] == 'W') {
            //             cout << 'R';
            //             WW--;
            //         }
            //         else if((s[i] == 'S' && S>0)) {
            //             cout << 'R';
            //             S--;
            //         }
            //         else if((s[i] == 'N' && N>0)) {
            //             cout << 'R';
            //             N--;
            //         }
            //         else if((s[i] == 'E' && E>0)) {
            //             cout << 'R';
            //             E--;
            //         }
            //         else if((s[i] == 'W' && W>0)) {
            //             cout << 'R';
            //             W--;
            //         }
            //         else cout << "H";
            //     }
            //     cout << endl;
            // }
