/*########বিসমিল্লাহির রাহমানির রাহিম#####################
##########################################
#JATIYA KABI KAJI NAZRUL ISLAM UNIVERSITY#
###########MD. MARUF HOSSAIN##############
###########DEPARTMENT OF CSE##############
###########SEASION: 2021-2022 ##########*/

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
#define ssortS  sort(S.begin(),S.end())
#define ssortS1 sort(S1.begin(),S1.end())
#define ssortS2 sort(S2.begin(),S2.end())
#define asortA  sort(A,A+n)
#define asortA1 sort(A1,A1+n)
#define asortA2 sort(A2,A2+n)
#define srevS   reverse(S.begin(),S.end())
#define srevS1  reverse(S1.begin(),S1.end())
#define srevS2  reverse(S2.begin(),S2.end())
#define arevA   reverse(A,A+n)
#define arevA1  reverse(A1,A1+n)
#define arevA2  reverse(A2,A2+n)
#define ll      long long
#define ull     unsigned long long

int main()
{
    int t; cin>>t; while(t--)
    {
        ll n,m,r,min1,min2,max1,max2;
        cin>>n>>m>>r;
        ll A[n],B[m],sum1=0,r1ans;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            sum1+=A[i];
            if(i==0)
            {
                min1=A[i];
                max1=A[i];
            }
            if(A[i]>max1)
                max1=A[i];
            if(A[i]<min1)
                min1=A[i];
        }

        for(int i=0; i<m; i++)
        {
            cin>>B[i];
            if(i==0)
            {
                min2=B[i];
                max2=B[i];
            }
            if(B[i]>max2)
                max2=B[i];
            if(B[i]<min2)
                min2=B[i];
        }
        if(max2>min1)
            r1ans=sum1-min1+max2;
        else
            r1ans=sum1;

        ll mini = min({min1,min2,max1,max2});
        ll fmax = max({min1,min2,max1,max2});
        if(r==1) cout<<r1ans<<"\n";
        else if(r%2==0) cout<<r1ans+mini-fmax<<"\n";
        else cout<<r1ans<<"\n";
    }
    return 0;
}

