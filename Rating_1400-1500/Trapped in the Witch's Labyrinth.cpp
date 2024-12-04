/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  $                                             $
  $   Author: marufhussain745                   $
  $   Institute: JKKNIU                         $
      Problem: C_Trapped_in_the_Witch_s_Labyrinth                
  $   Date: 2024/12/03                          $
  $   Time: 19:21:57                            $
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

using namespace std;

#define pi 3.1415926535897932384626433832795028841971693993751058
#define uni(x) unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n) upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n) lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define input(x) scanf("%d",&(x))
#define intt int64_t
#define endl "\n"
#define mod 1000000007
#define chars "0abcdefghijklmnopqrstuvwxyz"

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
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0), cin >> t;
    //cin >> t;
    while(t--) {
        //cout << "Case " << ++cs << ": ";
        int n, m; cin>> n>> m;
        vector<vector<int>> visit(n, vector<int> (m, 0));
        vector<string> s(n);
        for(auto &i: s) cin>> i;
        //for(auto &it: s) {for(auto &i: it) cout << i << " "; cout << endl;}

        // step 01
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                if(visit[x][y] != 0) continue;
                else if(s[x][y] != '?'){
                    int i = x, j = y;
                    bool flag = true;
                    while(flag && visit[i][j] == 0) {
                        if(s[i][j] == '?') { visit[i][j] = 1; break;}
                        if(s[i][j] == 'U' && i-1 >= 0) visit[i][j] = 1, i--;
                        else if(s[i][j] == 'U') visit[i][j] = 2, flag = false;
                        if(s[i][j] == 'D' && i+1 < n) visit[i][j] = 1, i++;
                        else if(s[i][j] == 'D') visit[i][j] = 2, flag = false;
                        if(s[i][j] == 'L' && j-1 >= 0) visit[i][j] = 1, j--;
                        else if(s[i][j] == 'L') visit[i][j] = 2, flag = false;
                        if(s[i][j] == 'R' && j+1 < m) visit[i][j] = 1, j++;
                        else if(s[i][j] == 'R') visit[i][j] = 2, flag = false;
                    }
                    if(!flag || visit[i][j] == 2) {
                        i = x, j = y;
                        while(true) {
                            if(visit[i][j] == 2) break;
                            if(s[i][j] == 'U' && i-1 >= 0) visit[i][j] = 2, i--;
                            else if(s[i][j] == 'U') break;
                            if(s[i][j] == 'D' && i+1 < n) visit[i][j] = 2, i++;
                            else if(s[i][j] == 'D') break;
                            if(s[i][j] == 'L' && j-1 >= 0) visit[i][j] = 2, j--;
                            else if(s[i][j] == 'L') break;
                            if(s[i][j] == 'R' && j+1 < m) visit[i][j] = 2, j++;
                            else if(s[i][j] == 'R') break;
                        }
                    }
                }
            }
        }


        // step 02
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(s[i][j] == '?') {
                    if(i+1 < n) {
                        if(visit[i+1][j] == 1 || s[i+1][j] == '?') visit[i+1][j] = 1, visit[i][j] = 1;
                    }
                    if(i-1 >= 0) {
                        if(visit[i-1][j] == 1 || s[i-1][j] == '?') visit[i-1][j] = 1, visit[i][j] = 1;
                    }
                    if(j+1 < m) {
                        if(visit[i][j+1] == 1 || s[i][j+1] == '?') visit[i][j+1] = 1, visit[i][j] = 1;
                    }
                    if(j-1 >= 0) {
                        if(visit[i][j-1] == 1 || s[i][j-1] == '?') visit[i][j-1] = 1, visit[i][j] = 1;
                    } 
                }
            }
        }
        int ans = 0;
        for(auto &it: visit) for(auto &i: it) if(i == 1) ans++;
        cout << ans << endl;
        //for(auto &it: visit) {for(auto &i: it) cout << i << " ";cout << endl;} cout << endl;
    }
    return 0;
}
