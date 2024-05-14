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

vector<int> mxt(const vector<int> a) {
    int mx1=-1, mx2=-1, mx3=-1;
    vector<int> v;
    for(int i = 0; i < a.size(); i++) {
        if(mx1 == -1) mx1 = i;
        else if(a[i] >= a[mx1]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if(mx2 == -1) mx2 = i;
        else if(a[i] >= a[mx2]) {
            mx3 = mx2;
            mx2 = i;
        }
        else if(mx3 == -1) mx3 = i;
        else if(a[i] >= a[mx3]) mx3 = i; 
    }
    v = {mx1,mx2,mx3};
    return v;
}

int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        int n; cin>> n;
        int nn = (n*(n-1))/2;
        vector<int> ans, v, A;
        map<int, int> mp;
        int x; 
        for(int i = 0; i < nn; i++) {
            cin>> x;
            v.push_back(x);
            mp[x]++;
            if(mp[x] == 1) A.push_back(x);
        }
        sort(A.begin(), A.end());
        int i = n-1;
        for(auto &it: A) {
            while(mp[it] > 0) {
                ans.push_back(it);
                mp[it] -= i;
                i--;
            }
            
        }
        ans.push_back(A.back());
        for(auto &it: ans) cout << it << " ";
        cout << endl;
    }
	return 0;
}
    
