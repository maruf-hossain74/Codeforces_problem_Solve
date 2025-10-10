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
    ll t; cin>>t; while(t--)
    {
        ll n,k; cin>>n>>k;
        if(n<k) NO;
        else if(n%2==0 && k%2==1 && k*2>n) NO;
        else if(n%2 == 1 && k%2==0) NO;
        else
        {
            YES;
            //odd
            if(n%2==1)
            {
                if(n%k==0)
                {
                    for(ll i = 1; i<=k; i++)
                    cout<<n/k<<" ";
                    cout<<"\n";
                }
                else
                {
                    if(((n/k)%2)==1)
                    {
                        for(ll i = 1; i<k; i++)
                        cout<<n/k<<" ";
                        cout<<(n/k) + (n%k)<<"\n";
                    }
                    else
                    {
                        for(ll i = 1; i<k; i++)
                        cout<<(n/k) - 1<<" ";
                       cout<<n - ((k-1)*((n/k)-1))<<"\n";
                    }
                }
            }

            //even
            else if(n%2==0)
            {
                if(n%k==0)
                {
                    for(ll i = 1; i<=k; i++)
                    cout<<n/k<<" ";
                    cout<<"\n";
                }
                else if(k%2==0)
                {
                    for(ll i = 1; i<k; i++)
                    cout<<n/k<<" ";
                    cout<<(n/k) + (n%k)<<"\n";
                }
                else
                {
                    if((n/k)%2==0)
                    {
                        for(ll i = 1; i<k; i++)
                        cout<<n/k<<" ";
                        cout<<(n/k) + (n%k)<<"\n";
                    }
                    else
                    {
                        for(ll i = 1; i<k; i++)
                        cout<<(n/k) - 1<<" ";
                        cout<<n-(((n/k) - 1)*(k-1))<<"\n";
                    }
                }
            }
        }
    }
    return 0;
}
// hodai eto boro korlam code. constraint vabcilam 10^9. by the way , nothing to say more....
