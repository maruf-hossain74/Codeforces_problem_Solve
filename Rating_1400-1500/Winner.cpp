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

int main()
{
    int t,mx1 = INT_MIN;
    cin>>t;
    map<string, int> mp1;
    map<string, int> mp2;
    string s[t];
    int A[t];

    for(int i = 0 ; i<t ; i++)
    {
	    cin >> s[i] >> A[i];
	    mp1[s[i]] += A[i];

    }
    for(auto it: mp1)
    {
        if(it.second > mx1) mx1 = it.second;
    }
    int cnt = 0;
    for(auto it: mp1)
    {
        if(it.second == mx1) cnt++;
    }
    if(cnt>1)
    {
        vector< string > vs;
        for(auto it: mp1)
        {
            if(it.second == mx1)
            {
                vs.pb(it.first);
            }
        }

        for(int i  = 0 ; i< t; i++)
        {
            bool flag = false;
            mp2[s[i]] += A[i];
            if(mp2[s[i]] >= mx1)
            {
                for(auto it: vs)
                {
                    if(s[i] == it)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<s[i]<<"\n";
                break;
            }
        }
    }
    else
    {
        for(auto it: mp1)
        {
            if(it.second == mx1)
            {
                cout<<it.first<<"\n";
                break;
            }
        }
    }
    return 0;
}
