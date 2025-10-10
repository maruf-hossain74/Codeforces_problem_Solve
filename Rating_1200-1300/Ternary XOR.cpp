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
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin();
#define arev(A)   reverse((A),(A)+(n))
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>

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


int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        char A[n], B[n];
        bool flag = false;
        for(ll i = 0 ; i < n ; i++)
        {
            if(s[i] == '1' && !flag)
            {
                flag = true;
                A[i] = '1';
                B[i] = '0';
            }
            else if(!flag)
            {
                if(s[i] == '0')
                {
                    A[i] = '0';
                    B[i] = '0';
                }
                else
                {
                    A[i] = '1';
                    B[i] = '1';
                }
            }
            else
            {
                if(s[i] == '0')
                {
                    A[i] = '0';
                    B[i] = '0';
                }
                else if(s[i] == '1')
                {
                    A[i] = '0';
                    B[i] = '1';
                }
                else
                {
                    A[i] = '0';
                    B[i] = '2';
                }
            }
        }
        for(ll i = 0 ; i < n ; i++) cout<<A[i]; cout<<"\n";
        for(ll i = 0 ; i < n ; i++) cout<<B[i]; cout<<"\n";
    }
    return 0;
}
