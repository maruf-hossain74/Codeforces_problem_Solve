/*$$$$$$$$ বিসমিল্লাহি2 রাহমানির রাহিম $$$$$$$
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

 
int T, n, k, cnt, Cnt, a[200005], ans, fac[200005], inv[200005];
int qpow(int x, int y) {
	int ans = 1;
	while(y) {
		if(y & 1) ans = ans * x % mod;
		x = x * x % mod;
		y >>= 1;
	}
	return ans;
}
int C(int x, int y) {
	if(y > x) return 0;
	return fac[x] * inv[y] % mod * inv[x-y] % mod;
}


int t = 1, cs = 0;
int32_t main() {
    fac[0] = inv[0] = 1;
    for(int i = 1; i <= 200000; i++) fac[i] = fac[i-1] * i % mod;
    inv[200000] = qpow(fac[200000], mod-2);
    for(int i = 199999; i; i--) inv[i] = inv[i+1] * (i+1) % mod;
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        // cout << "Case " << ++cs << ": ";
        cin>> n>> k,cnt = Cnt = ans = 0;
        for(int i=1; i<=n; i++) {
            cin>> a[i];
            if(a[i]) Cnt++;
            else cnt++;
        }
        for(int i=k/2+1; i<=k; i++) ans=(ans + C(cnt, k-i) * C(Cnt, i) % mod) % mod;
        cout<< ans << endl;
    }
	return 0;
}
