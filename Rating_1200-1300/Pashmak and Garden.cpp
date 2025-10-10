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
#define ssortS  sort(S.begin(),S.end())
#define asortA  sort(A,A+n)
#define srevS   reverse(S.begin(),S.end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin();
#define arevA   reverse(A,A+n)
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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    //x same
    if(x1 == x2)
        cout<<x1+(y2-y1)<<" "<<y1<<" "<<x2+(y2-y1)<<" "<<y2<<"\n";
    //y same
    else if(y1 == y2)
        cout<<x1<<" "<<y1+(x2-x1)<<" "<<x2<<" "<<y2+(x2-x1)<<"\n";
    //diagonal
    else if (abs(y2-y1) == abs(x2-x1))
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";    
    //not possible 
    else
        cout<<-1<<"\n";    
    return 0;
}
