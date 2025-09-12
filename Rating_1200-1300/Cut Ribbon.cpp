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
    int  n,x,y,z,A[3],mx=0;
    cin>>n>>A[0]>>A[1]>>A[2];
    sort(A,A+3);
    x= A[0];
    y= A[1];
    z= A[2];
    if (n%x==0 || (n%x)+x==y || (n%x)+x==z)
        cout<<n/x<<"\n";
    else
    {
        for(int c=0; c*z<=n; c++)
        {
            for(int b=0; b*y+c*z<=n; b++)
            {
                for(int a=0; a*x + b*y + c*z<=n; a++)
                {
                    if(a*x+b*y+c*z==n)
                    {
                        if(mx<a+b+c)
                            mx=a+b+c;
                    }
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
