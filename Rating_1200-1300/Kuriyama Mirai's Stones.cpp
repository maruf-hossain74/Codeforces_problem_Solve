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

int gcd(int a, int b)
{
    int x=max({a,b});
    int y=min({a,b});
    int rem = y;
    while(rem!=0)
    {
        rem=x%y;
        x=y;
        y = rem;
    }
    return x;
}

int lcm(int x, int y)
{ return ((x*y)/gcd(x,y)); }

int main()
{
    ll n; cin>>n;
    ll A[n],B[n],C[n];
    for(ll i = 0; i<n; i++)
    {
        cin>>A[i];
        if(i==0)
            B[0] = A[0];
        else B[i] = B[i-1] + A[i];
    }
    sort(A,A+n);
    for(ll i = 0; i<n; i++)
    {
        if(i==0)
            C[i] = A[0];
        else C[i] = C[i-1] + A[i];
    }
    ll m; cin>>m;
    while(m--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a == 1)
        {
            if(b-2>=0)
                cout<<B[c-1]- B[b-2]<<"\n";
            else cout<<B[c-1]<<"\n";
        }
        else
        {
            if(b-2>=0)
            cout<<C[c-1] - C[b-2]<<"\n";
            else cout<<C[c-1]<<"\n";
        }
    }
    return 0;
}
