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
    ll A[n],B[n],C[n];
    for(ll i = 0,j=0; i<n; i++)
        cin>>A[i];
    for(ll i = 0; i<n-1; i++)
        cin>>B[i];
    for(ll i = 0; i<n-2; i++)
        cin>>C[i];
    B[n-1] = 10000000000;
    sort(B,B+n);
    sort(A,A+n);
    ll ans1,ans2;
    C[n-2] = 10000000000;
    C[n-1] = 10000000000;
    sort(C,C+n);
    for(ll i = 0; i<n; i++)
    {
        if(A[i]!=B[i])
        {
            ans1 = A[i];
            break;
        }
    }

    for(ll i = 0; i<n-1; i++)
    {
        if(B[i]!=C[i])
        {
            ans2 = B[i];
            break;
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}
