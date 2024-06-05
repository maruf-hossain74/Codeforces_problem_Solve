/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>
#include <queue>
#include <climits>

using namespace std;

#define pi      3.1415926535897932384626433832795028841971693993751058
#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"
#define NO      cout<<"NO"<<"\n"
#define No      cout<<"No"<<"\n"
#define no      cout<<"no"<<"\n"
#define m1      cout<<-1<<"\n"
#define ssort(S)  sort((S).begin(),(S).end())
#define asort(A)  sort((A),(A)+(n))
#define srev(S)   reverse((S).begin(),(S).end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n)    lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define arev(A)   reverse((A),(A)+(n))
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>
#define input(x) scanf("%d",&(x))
#define int int64_t
#define endl "\n"
#define speed (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define mod 1000000007
#define chars "0abcdefghijklmnopqrstuvwxyz"

string dtob(int n){
     string m = "";
    while(n!=0){ if(n%2==0)
    m='0'+m; else m='1'+m;
    n/=2; } return m;}
int btod(string s){
    int sz = s.size(),des = 0;
    reverse(s.begin(),s.end());
    for(int i = 0; i<sz; i++)
        if(s[i] == '1') des += pow(2,i);
    return des;
}

int gcd(int a,int b){
    int  x = max({a,b});
    int  y = min({a,b});
    int rem = x%y;
    while(rem!=0){
    x = y; y = rem;
    rem = x%y;}
    return y;
}

int lcm(int x, int y){ 
    return ((x*y)/gcd(x,y)); }

int nPr(int n, int r){
    int ans = 1;
    for(int i = n - r + 1 ; i <= n ; i++)
        ans*=i;
    return ans;
}
int nCr(int n, int r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

bool prime_check(int n) {
    if(n<2) return false;
    else if(n <4) return true;
    else if(n%2==0) return false;
    else {
        for(int i = 3; i<=sqrt(n); i+= 2) {
            if(n%i==0) return false;
        }
        return true;
    }
}

bool int_palindrome(int n) {
        int int1 = n , int2 = 0;
        while( n!=0 ) {
            int2 = int2*10 + (n%10);
            n /= 10;
        }
        if(int1 == int2 ) return true;
        else return false;
}
bool array_Palindrome(const vector<int>& vec) {
    int start = 0;
    int end = vec.size() - 1;
    while (start < end) {
        if (vec[start] != vec[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int factorial(int n) {
    int ans = 1;
    while(n>=1) {ans *= n; n--;}
    return ans;
}
bool tp(int n) {
    while(true) {
        if(n==1) return true;
        else if(n%2 == 1) return false;
        n/=2;
    }
}

int sum_of_digit(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int binary(vector<int> &A, int x) {
    int mn = 0, mx = A.size() - 1;
    int val = -1;
    while(mn <= mx) {
        int mid = (mn + mx) / 2;
        if(A[mid] < x) mn = mid +1;
        else {
            val = A[mid];
            mx = mid -1;
        }
    }
    return val;
}
int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        int n, m; cin>> n>> m;
        vector<vector<int>> v(m, vector<int> (n)), sum(m, vector<int> (n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin>> v[j][i];
            }
        }
        for(auto &it: v) sort(it.begin(), it.end());
        for(int i = 0; i < m; i++) {
            for(int j = n-1; j >= 0; j--) {
                if(j == n-1) sum[i][j] = v[i][j];
                else sum[i][j] = v[i][j] + sum[i][j+1];
            }
        }
        // for(auto &it: sum) {
        //     for(auto &i: it) {
        //         cout << i << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        int ans = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 1; j < n; j++) {
                ans += sum[i][j] - (v[i][j-1] * (n-j));
            }
        }
        cout << ans << endl;
    }
	return 0;
}
