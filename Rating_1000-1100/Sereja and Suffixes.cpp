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
    int n,m;
    cin>>n>>m;
    int A[n];
    vector<pair<int,int>>v;
    map<int,int>mp;
    for(int i = 0 ; i<n; i++)
        cin>>A[i];
    arevA;;
    for(int i = 0,j=0; i<n; i++)
    {
       mp[A[i]]++;
       if(mp[A[i]] == 1)
        j++;
        v.pb(make_pair(i,j));
    }

    for(int i = 0; i<m; i++)
    {
        int k;
        cin>>k;
        cout<<v[n-k].second<<"\n";
    }
    return 0;
}
