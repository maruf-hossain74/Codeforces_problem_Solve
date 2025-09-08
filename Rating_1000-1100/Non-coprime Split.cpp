/*#############বিসমিল্লাহির রাহমানির রাহিম###################
############################################
##JATIYA KABI KAJI NAZRUL ISLAM UNIVERSITY##
###########SEASION: 2021-2022 ##############
###########MD. MARUF HOSSAIN################
###########DEPARTMENT OF CSE##############*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>

using namespace std;

#define YES cout<<"YES"<<"\n"
#define yes cout<<"yes"<<"\n"
#define NO cout<<"NO"<<"\n"
#define no cout<<"no"<<"\n"
#define ll long long
#define ull unsinged long long

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,flag=0;
        cin>>x>>y;
        for(int i=x; i<=y; i++)
        {
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    cout<<i-j<<' '<<j<<"\n";
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==0) cout<<-1<<"\n";
    }
    return 0;
}
