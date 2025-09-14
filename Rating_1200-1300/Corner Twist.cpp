
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

int t = 1, cs = 0;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        // cout << "Case " << ++cs << ": ";
        int n, m; cin>> n >> m;
        int A[n][m], B[n][m];
        string a[n], b[n];
        for(int i = 0; i < n ; i++) cin>> a[i];
        for(int i = 0; i < n; i++) cin>> b[i];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                A[i][j] = a[i][j]-'0';
            }
        } 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                B[i][j] = b[i][j]-'0';
            }
        } 
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < m-1; j++) {
                int need;
                if(A[i][j] == B[i][j]) continue;
                if(A[i][j] == 0) {
                    if(B[i][j] == 2) need = 1;
                    else need = 2;
                    A[i][j] = B[i][j];
                    A[i+1][j+1] = (A[i+1][j+1]+B[i][j]) % 3;
                    A[i][j+1] = (A[i][j+1]+need) % 3;
                    A[i+1][j] = (A[i+1][j]+need) % 3;
                }
                else if(A[i][j] == 1) {
                    if(B[i][j] == 2) {
                        A[i][j] = B[i][j];
                        A[i+1][j+1] = (A[i+1][j+1]+1) % 3;
                        A[i][j+1] = (A[i][j+1]+2) % 3;
                        A[i+1][j] = (A[i+1][j]+2) % 3;
                    }
                    else {
                        A[i][j] = B[i][j];
                        A[i+1][j+1] = (A[i+1][j+1]+2) % 3;
                        A[i][j+1] = (A[i][j+1]+1) % 3;
                        A[i+1][j] = (A[i+1][j]+1) % 3;
                    }
                }
                else {
                    if(B[i][j] == 0) {
                        A[i][j] = B[i][j];
                        A[i+1][j+1] = (A[i+1][j+1]+1) % 3;
                        A[i][j+1] = (A[i][j+1]+2) % 3;
                        A[i+1][j] = (A[i+1][j]+2) % 3;
                    }
                    else {
                        A[i][j] = B[i][j];
                        A[i+1][j+1] = (A[i+1][j+1]+2) % 3;
                        A[i][j+1] = (A[i][j+1]+1) % 3;
                        A[i+1][j] = (A[i+1][j]+1) % 3;
                    }
                }
            }
        }
        int ans = true;
        for(int i = 0; ans && i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(A[i][j] != B[i][j]) {
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
