/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<cmath>
#include<iomanip>
#include <queue>
#include <climits>
#include<stdio.h>

using namespace std;

#define pi      3.1415926535897932384626433832795028841971693993751058
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n)    lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define input(x) scanf("%d",&(x))
#define int int64_t
#define endl "\n"
#define mod 1000000007
#define chars "0abcdefghijklmnopqrstuvwxyz"

string dtob(int n){ string m = ""; while(n!=0){ if(n%2==0) m='0'+m; else m='1'+m; n/=2; } return m;}

int btod(string s) { int sz = s.size(),des = 0; reverse(s.begin(),s.end());
    for(int i = 0; i<sz; i++) if(s[i] == '1') des += pow(2,i); return des; }

int gcd(int a,int b){
    int  x = max({a,b}); int  y = min({a,b}); int rem = x%y; while(rem!=0){
    x = y; y = rem; rem = x%y;} return y; }

int lcm(int x, int y){  return ((x*y)/gcd(x,y)); }

int nPr(int n, int r){ int ans = 1; for(int i = n - r + 1 ; i <= n ; i++) ans*=i; return ans;}

int nCr(int n, int r) { if (r > n) return 0; if (r == 0 || r == n) return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r); }

int nCr_mod(int n, int r) { if (r > n) return 0; if (r == 0 || r == n) return 1;
    return ((nCr(n - 1, r - 1) % mod) + (nCr(n - 1, r)%mod))%mod; }

bool prime_check(int n) { if(n<2) return false; else if(n <4) return true;
    else if(n%2==0) return false; else { for(int i = 3; i<=sqrt(n); i+= 2) {
    if(n%i==0) return false; } return true; }}

bool int_palindrome(int n) { int int1 = n , int2 = 0; while( n!=0 ) {
    int2 = int2*10 + (n%10); n /= 10; } if(int1 == int2 ) return true;
     else return false;}

bool array_Palindrome(const vector<int>& vec) { int start = 0; int end = vec.size() - 1;
    while (start < end) { if (vec[start] != vec[end]) { return false; } start++; end--;} return true;}

int factorial(int n) {int ans = 1; while(n>=1) {ans *= n; n--;} return ans;}

int sum_of_digit(int n) { int sum = 0; while(n != 0) { sum += n % 10; n /= 10; } return sum;}

int binary_search(vector<int> &A, int x) { int mn = 0, mx = A.size() - 1; int val = -1; while(mn <= mx) {
        int mid = (mn + mx) / 2; if(A[mid] < x) mn = mid +1; else if(A[mid] == x) return mid;
        else { mx = mid -1; } } return val;}
int power(int n, int k) { int ans = 1;while(k--) ans *= n; return ans; }

vector<int> primes(int n) { vector<int> prime(n+1, 0), ans; for(int i = 2; i*i <= n; i++) { if(prime[i] == 0) {
    for(int j = 2; i*j <= n; j++) { prime[i*j] = 1; } } } for(int i = 2; i <= n; i++) { if(prime[i] == 0)
    ans.push_back(i); } return ans; }

int t = 1, cs = 0;


int mx = INT64_MAX;
map<pair<int, int>, int> record;
vector<pair<int, int>> adj[1000005];
vector<int> ans;
void dfs(int curr, int par) {
    for(auto &it: adj[curr]) {
        int to = it.first;
        int id = it.second;
        if(to == par) continue;
        record[{curr, to}] = id;
        record[{to, curr}] = id;
        if(ans[curr] != mx) {
            if(curr == 1) ans[to] = 1;
            else {
                if(id > record[{curr, par}])
                    ans[to] = ans[curr];
                else
                    ans[to] = ans[curr]+1;
            }
        }
        dfs(to, curr);
    }
}
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        // cout << "Case " << ++cs << ": ";
        int n; cin>> n;
        for(int i = 0; i <= n; i++) adj[i].clear();
        ans.assign(n+1, mx);
        ans[0] = 0;
        ans[1] = 0;
        record.clear();
        for(int i = 1; i <n; i++) {
            int x, y; cin>> x >> y;
            adj[x].push_back({y, i});
            adj[y].push_back({x, i});
        }
        dfs(1, -1);
        int res = *max_element(ans.begin(), ans.end());
        cout << res << endl;
    }
	return 0;
}
