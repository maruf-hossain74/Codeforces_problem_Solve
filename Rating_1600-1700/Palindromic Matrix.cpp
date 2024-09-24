

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


using namespace std;

#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"
#define NO      cout<<"NO"<<"\n"
#define No      cout<<"No"<<"\n"
#define no      cout<<"no"<<"\n"

#define ssort(S)  sort((S).begin(),(S).end())
#define asort(A)  sort((A),(A)+(n))
#define srev(S)   reverse((S).begin(),(S).end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define arev(A)   reverse((A),(A)+(n))
#define ll      long long

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
  int n ;cin>>n;
  int A[n*n];
  map<int, int>mp;
  vector<int>v4;
  vector<int>v2;
  for(int i = 0 ; i<n*n; i++)
    {
        cin>>A[i];
        mp[A[i]]++;
    }
    int odd = 0, ov = 0,om, ocheck = 0;
    for(auto it: mp)
    {
        ocheck += it.second%4;
        if(it.second % 2 == 1)
        {
            odd++;
            ov = it.second;
            om = it.first;
        }
        int four = it.second - (it.second % 4), rem = it.second % 4;
        while(four--) v4.pb(it.first);
        while(rem-- && it.second%2 == 0) v2.pb(it.first);
    }
    //cout<<odd<<" "<< ocheck<<"\n";
    if(odd >= 2 || ocheck > n+(n-1)) cout<<"NO"<<"\n";
    else if(n%2 == 0 && odd) cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<"\n";
        int matrix[n][n] = {0};
        for(int i = 0 ; i < n/2; i++)
        {
            for(int j = 0 ; j < n/2; j++)
            {

                matrix[i][j] =  v4.back();
                v4.pop_back();
                matrix[i][n-j-1] =  v4.back();
                v4.pop_back();
                matrix[n-1-i][j] =  v4.back();
                v4.pop_back();
                matrix[n-1-i][n-1-j] =  v4.back();
                v4.pop_back();
            }
        }
        for(int i = 0 ; i < v4.size(); i++)
            v2.push_back(v4[i]);
        for(int i = 1 ; i < mp[om]%4; i++)
            v2.push_back(om);
        //cout<<v2.size()<<"\n"<<om<<"\n\n\n\n\n\n";

        if(odd == 1)
        {
             matrix[n/2][n/2] = om;
             //sort(v2.begin(),v2.end());
             for(int i = 0 , j = n/2; i < n/2 ; i++)
             {
                 matrix[i][j] =  v2.back();
                    v2.pop_back();
                 matrix[n-1-i][j] =  v2.back();
                    v2.pop_back();
             }
             for(int j = 0 , i = n/2; j < n/2 ; j++)
             {
                 matrix[i][j] =  v2.back();
                    v2.pop_back();
                 matrix[i][n-1-j] =  v2.back();
                    v2.pop_back();
             }
        }
        //cout<<v2.size()<<"\n";
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
  return 0;
}
