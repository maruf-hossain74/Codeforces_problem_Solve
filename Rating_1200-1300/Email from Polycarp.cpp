/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  $                                             $
  $   Author: marufhussain745                   $
  $   Institute: JKKNIU                         $
      Problem: K_Email_from_Polycarp                
  $   Date: 2025/07/16                          $
  $   Time: 01:22:04                            $
  $                                             $
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>
#include <queue>
#include <climits>
#include<stdio.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
using namespace std;
using u128 = __uint128_t;

#define pi 3.1415926535897932384626433832795028841971693993751058
#define uni(x) unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n) upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n) lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define input(x) scanf("%d",&(x))
#define int int64_t
#define endl "\n"
#define mod 1000000007
#define chars "0abcdefghijklmnopqrstuvwxyz"
#define inf 1e18
#define print(x) for(auto &it: (x)) cout << it << " "; cout << endl
#define printg(x) int y=0;for(auto &it: (x)) {cout<<y<<" -> ";for(auto &i: it) cout << i << " "; y++;cout << endl;}
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

string dtob(int n){ string m = ""; while(n!=0){ if(n%2==0) m='0'+m; else m='1'+m; n/=2; } return m;}

int btod(string s) { int sz = s.size(),des = 0; reverse(s.begin(),s.end());
    for(int i = 0; i<sz; i++) if(s[i] == '1') des += pow(2,i); return des; }

int gcd(int a,int b){
    int x = max({a,b}); int y = min({a,b}); int rem = x%y; while(rem!=0){
    x = y; y = rem; rem = x%y;} return y; }

int lcm(int x, int y){  return ((x*y)/gcd(x,y)); }

int nPr(int n, int r){ int ans = 1; for(int i = n - r + 1 ; i <= n ; i++) ans*=i; return ans;}

int nCr(int n, int r) { if (r > n) return 0; if (r == 0 || r == n) return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r); }

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

vector<int> fact(10, 0), factinv(10, 0);
int md = mod;

 int power(int num, int pow) { int res = 1; while (pow) { if (pow%2)
    res = (u128)(res * num) % md; num = (u128)(num * num) % md; pow/=2; } return res; }

int genfact(int n) {if(!n)return 1;return fact[n]?fact[n]:fact[n]=n*genfact(n-1)%md;}

int genfactinv(int n){if(!n)return 1;return factinv[n]?factinv[n]:factinv[n]=power(genfact(n),md-2);}

int ncrmod(int n, int r) {return (genfact(n) * genfactinv(r) % md) * genfactinv(n - r) % md; }

vector<int> primes(int n) { vector<int> prime(n+1, 0), ans; for(int i = 2; i*i <= n; i++) { if(prime[i] == 0) {
    for(int j = 2; i*j <= n; j++) { prime[i*j] = 1; } } } for(int i = 2; i <= n; i++) { if(prime[i] == 0)
    ans.push_back(i); } return ans; }

bool triangle(int a, int b, int c) { if(a+b <= c || a+c <= b || b+c <= a) return false; else return true;}

int t = 1, cs = 0;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0), cin >> t;
    //cin >> t;
    while(t--) {
        //cout << "Case " << ++cs << ": ";
        string s, k; cin>> s>> k;
        int n = s.size(), m = k.size();
        int cnt = 1;
        vector<int> v1, v2;
        vector<char> c1, c2;
        if(n == 1) c1.push_back(s[0]), v1.push_back(1);
        if(m == 1) c2.push_back(k[0]), v2.push_back(1);
        for(int i = 1; i < n; i++) {
            if(s[i-1] != s[i]) {
                v1.push_back(cnt);
                c1.push_back(s[i-1]);
                cnt = 1;
            }
            else cnt++;
            if(i == n-1) {
                v1.push_back(cnt);
                c1.push_back(s[i]);
            }
        }
        cnt = 1;
        for(int i = 1; i < m; i++) {
            if(k[i-1] != k[i]) {
                v2.push_back(cnt);
                c2.push_back(k[i-1]);
                cnt = 1;
            }
            else cnt++;
            if(i == m-1) {
                v2.push_back(cnt);
                c2.push_back(k[i]);
            }
        }
        //print(c1); print(v1);  print(c2);print(v2);
        if(c1.size() != c2.size()) cout << "NO" << endl;
        else {
            bool ans = true;
            for(int i = 0; i < c1.size() && ans; i++) {
                if(!(c1[i] == c2[i] && v1[i] <= v2[i])) ans = false;
            }
            cout << (ans?"YES":"NO") << endl;
        }
    }
    return 0;
}
