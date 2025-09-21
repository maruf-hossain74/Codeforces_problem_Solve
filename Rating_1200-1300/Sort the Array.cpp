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
	ll A[n],B[n];
	int cnt = 0;
	for(int i = 0 ; i<n; i++)
    {
        cin>>A[i];
        B[i] = A[i];
    }
    asortA;
    int st=n,en=n;
    for(int i = 0 ; i<n; i++)
    {
        if(A[i]!=B[i])
        {
            st = i;
            break;
        }
    }
    if(st==n)
    {
        yes;
        cout<<1<<" "<<1<<"\n";
    }
    else{
        for(int i = n-1 ; i>=0; i--)
        {
            if(A[i]!=B[i])
            {
                 en = i;
                 break;
            }
        }
        bool ans = true;
        for(int i = st; i<= en ; i++)
        {
            if(B[i]> B[i-1] && i>st)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            yes;
            cout<<st+1<<" "<<en+1<<"\n";
        }
        else no;
    }
return 0;
}
