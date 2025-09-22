/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$$$$$$$
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
#define asortA  sort(A,A+n)
#define srevS   reverse(S.begin(),S.end())
#define arevA   reverse(A,A+n)
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define viA     vector<int>A
#define vlA     vector<long long>A
#define vcS     vector<char>S

int main()
{
    ll n;
    cin>>n;
    ll A[n],mx,mn;
    map<ll,ll>mp;
    for(ll i = 0,j=0; i<n; i++)
    {
        cin>>A[i];
        if(i==0)
        {
            mx = A[i];
            mn = A[i];
        }
        mp[A[i]]++;
        if(A[i]>mx)
            mx = A[i];
        if(A[i]<mn)
            mn = A[i];
    }
    if(mx!=mn)
    cout<<mx-mn<<" "<<mp[mx] * mp[mn]<<"\n";
    else
    cout<<mx-mn<<" "<<mp[mx]*(mp[mx]-1)/2<<"\n";
    return 0;
}
