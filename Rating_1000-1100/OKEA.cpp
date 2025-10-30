//Tamjid vai er code


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define int long long
#define lld long double
#define ull unsigned long long
#define all(x) (x).begin(), (x).end() 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve()
{
    int n, k; cin>>n>>k;
    if(n == 1 && k > 1) cout<<"NO\n";
    else if(k == 1 || n%2 == 0){
        cout<<"YES\n";
        int odd = 1, even = 2;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                if(i & 1){
                    cout<<even<<" ";
                    even += 2;
                } 
                else{
                    cout<<odd<<" ";
                    odd += 2;
                }
            }
            cout<<endl;
        }
    } else cout<<"NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1; 
    cin>>t; 
    while(t--) solve();

    return 0;
}
