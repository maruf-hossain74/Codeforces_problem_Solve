/*########বিসমিল্লাহির রাহমানির রাহিম############
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
    int t;
    cin>>t;
    string s;
    int max;
    for(int i =0 ; i<t; i++)
    {
        string name;
        cin>>name;
        int x,y,a,b,c,d,e,ans;
        cin>>x>>y>>a>>b>>c>>d>>e;
        ans = (x*100)-(y*50)+a+b+c+d+e;
        if(i==0)
        {
            max=ans;
            s=name;
        }
        if(ans>max)
        {
            max=ans;
            s=name;
        }
    }
    cout<<s<<endl;
    return 0;
}
