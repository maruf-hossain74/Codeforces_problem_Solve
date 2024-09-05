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

vector<int> primes(int n) {
    vector<int> prime(n+1, 0), ans;
    for(int i = 2; i*i <= n; i++) {
        if(prime[i] == 0) {
            for(int j = 2; i*j <= n; j++) {
                prime[i*j] = 1;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(prime[i] == 0) ans.push_back(i);
    }
    return ans;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t = 1;
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    cin>> t;
    while(t--) {
        int n, health; cin>> n>> health;
        vector<vector<int>> A(n, vector<int> (n));
        for(auto &it: A) for(auto &i: it) cin>> i;

        // column wise best traverse
        int mxC = 0;
        vector<vector<int>> B(n, vector<int>(n));
        for(int i = n-1; i >= 0; i--) {
            for(int j = 0; j < n; j++) {
                if(i == n-1) B[i][j] = A[i][j];
                else {
                    B[i][j] = B[i+1][j] + A[i][j];
                    if(j+1 < n) B[i][j] = max({B[i][j], B[i+1][j+1] + A[i][j]});
                    if(j-1 >= 0) B[i][j] = max({B[i][j], B[i+1][j-1] + A[i][j]});
                }
                if(i == 0) mxC = max({mxC, B[i][j]});
            }
        }

        //Row wise best traverse
        int mxR = 0;
        vector<vector<int>> C(n, vector<int>(n));
        for(int j = n-1; j >= 0; j--) {
            for(int i = 0; i < n; i++) {
                if(j == n-1) C[i][j] = A[i][j];
                else {
                    C[i][j] = C[i][j+1] + A[i][j];
                    if(i+1 < n) C[i][j] = max({C[i][j], C[i+1][j+1] + A[i][j]});
                    if(i-1 >= 0) C[i][j] = max({C[i][j], C[i-1][j+1] + A[i][j]});
                }
                if(j == 0) mxR = max({mxR, C[i][j]});
            }
        }


        int x, y;
        if(mxC >= mxR) {
            for(int i = 0; i < n; i++) {
                if(B[0][i] == mxC) {
                    x = 0, y = i;
                    break;
                }
            }
            while(true) {
                A[x][y] = 0;
                if(x == n-1) break;
                int nxtMx = 0;
                for(int k = max({int(0), y-1}); k <= min({n-1, y+1}); k++) nxtMx = max({nxtMx, B[x+1][k]});
                for(int k = max({int(0), y-1}); k <= min({n-1, y+1}); k++) {
                    if(B[x+1][k] == nxtMx) {
                        x++, y = k;
                        break;
                    }
                }
            }
        }

        else {
            for(int i = 0; i < n; i++) {
                if(C[i][0] == mxR) {
                    x = i, y = 0;
                    break;
                }
            }
            while(true) {
                A[x][y] = 0;
                if(y == n-1) break;
                int nxtMx = 0;
                for(int k = max({int(0), x-1}); k <= min({n-1, x+1}); k++) nxtMx = max({nxtMx, C[k][y+1]});
                for(int k = max({int(0), x-1}); k <= min({n-1, x+1}); k++) {
                    if(C[k][y+1] == nxtMx) {
                        x = k, y++;
                        break;
                    }
                }
            }
        }

        vector<int> v;
        for(auto &it: A) {
            for(auto &i: it) {
                if(i != 0)
                    v.push_back(i);
            }
        }
        sort(v.begin(), v.end());
        int total_damage;
        if(v.empty()) total_damage = 0;
        else total_damage = v.front();
        for(int i = 1; i < v.size(); i++) {
            v[i] += v[i-1];
            total_damage += v[i];
        }
        if(total_damage < health) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}