/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAJI NAZRUL ISLAM UNIVERSITY
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
#define asort(A,n)  sort((A),(A)+(n))
#define srevS   reverse(S.begin(),S.end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin();
#define arev(A,n)   reverse((A),(A)+(n))
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

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<"\n";
        for(int i=0; i<n/2; i++)
        cout<<2<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<n/2<<"\n";
        for(int i=1; i<n/2; i++)
        cout<<2<<" ";
        cout<<3<<"\n";
    }
    return 0;
}
