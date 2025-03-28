/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  $                                             $
  $   Author: marufhussain745                   $
  $   Institute: JKKNIU                         $
      Problem: C_Maximum_Product_Strikes_Back                
  $   Date: 2025/03/28                          $
  $   Time: 00:49:56                            $
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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

vector<int> fact(101, 0), factinv(101, 0);
int md = 998244353;

int power(int num, int pow) { int res = 1; while (pow) { if (pow & 1)
    res = (res * num) % md; num = (num * num) % md; pow >>= 1; } return res;}

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
        int n; cin>> n;
        vector<int> v = {0}, zeros = {0};
        for(int i = 1; i <= n; i++) {
            int x; cin>> x;
            v.push_back(x);
            if(!x) zeros.push_back(i);
        }
        v.push_back(0), zeros.push_back(n+1);
        vector<pair<int,pair<int,int>>> table;
        for(int i = 1; i < zeros.size(); i++) {
            int l = zeros[i-1]+1, r = zeros[i]-1;
            int cnt = 0, mn = 0;
            for(int j = l; j <= r; j++) {
                v[j]==2||v[j]==-2?cnt++:0;
                v[j]<0?mn++:0;
            }
            if(mn&1) {
                int cnt1 = 0, cnt2 = 0, pos1, pos2;
                bool f1 = true, f2 = true;
                for(int j = l; j <= r; j++) {
                    abs(v[j])==2?cnt1++:0;
                    if(v[j]<0) {
                        pos1 = j;
                        v[j]==-1?f1=false:0;
                        break;
                    }
                }
                for(int j = r; j >= l; j--) {
                    abs(v[j])==2?cnt2++:0;
                    if(v[j]<0) {
                        pos2 = j;
                        v[j]==-1?f2=false:0;
                        break;
                    }
                }
                if(cnt1 < cnt2) table.push_back({cnt-cnt1, {pos1, n-zeros[i]+1}});
                else table.push_back({cnt-cnt2, {zeros[i-1], n-pos2+1}});
            }
            else table.push_back({cnt,{zeros[i-1], n-zeros[i]+1}});
        }
        sort(table.rbegin(), table.rend());
        cout << table[0].second.first << " " << table[0].second.second << endl;
        // for(auto &it: table) {
        //     cout << it.first << " " << it.second.first << " " << it.second.second << endl;
        // } cout << endl;
        //for(auto &it: zeros) cout << it << " "; cout << endl;
    }
    return 0;
}
