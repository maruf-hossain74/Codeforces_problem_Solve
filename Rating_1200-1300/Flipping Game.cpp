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
    int n; cin>>n;
    int A[n],mz = 0,mo = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
        if(A[i]==0) mz++;
        else mo++;
    }
    int to,tz,mx = mz;
    for(int i = 0 ; i<n; i++)
    {
        to = 0,tz = 0;
        for(int j = i; j<n; j++)
        {
            if(A[j] == 1) to++;
            else tz++;
            mx = max({mx , mo-to+tz});
        }
    }
    cout<<mx<<endl;
    return 0;
}
