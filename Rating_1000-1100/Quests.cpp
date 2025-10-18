/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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

using namespace std;

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
#define speed (ios_base:: sync_with_stdio(false),cin.tie(NULL))

int gcd(ll a, ll b){
    ll x=max({a,b});
    ll y=min({a,b});
    ll rem = y;
    while(rem!=0){
        rem=x%y;
    x=y; y = rem;
    } return x;
}
string dtob(ll n){
     string m = "";
    while(n!=0){ if(n%2==0)
    m='0'+m; else m='1'+m;
    n/=2; } return m;}
    ll btod(string s){
    ll sz = s.size(),des = 0;
    reverse(s.begin(),s.end());
    for(ll i = 0; i<sz; i++)
        if(s[i] == '1') des += pow(2,i);
    return des;
}
int lcm(ll x, ll y)
{ return ((x*y)/gcd(x,y)); }

int npr(int n, int r)
{
    ll  ans = 1;
    for(int i = n - r + 1 ; i <= n ; i++)
        ans*=i;
    return ans;
}
int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
bool prime_check(int n)
{
    if(n<2) return false;
    else if(n <4) return true;
    else if(n%2==0) return false;
    else
    {
        for(int i = 3; i<=sqrt(n); i+= 2)
        {
            if(n%i==0) return false;
        }
        return true;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    {
        ll n,k; cin>>n>>k;
        ll A[n],B[n],sum1[n],sum2[n];
        for(ll i = 0 ; i < n; i++)
        {
            cin>>A[i];
            if(i == 0)
                sum1[i] = A[i];
            else sum1[i] = sum1[i-1] + A[i];
        }
        ll ans = A[0],smx = INT_MIN;
        for(ll i = 0; i<n; i++)
        {
            cin>>B[i];
            smx = max({B[i],smx});
            if(i+1<=k)
            ans = max({ans,sum1[i]+((k-i-1)*smx)});

        }
        cout<<ans<<"\n";
    }
    return 0;
}
