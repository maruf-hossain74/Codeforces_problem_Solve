/*$$$$$$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$ JATIYA KABI KAJI NAZRUL ISLAM UNIVERSITY $$
$$$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$$$
$$$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$$$
$$$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$$$*/

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
#define asortA  sort(A,A+n)
#define srevS   reverse(S.begin(),S.end())
#define arevA   reverse(A,A+n)
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>

int main()
{
    int tc;
    cin>>tc;
    while(tc!=0)
    {
        ll a,b,c,sum,pnt=51;
        cin>>a>>c;
        int s[a];
        b=a;
        for(int i=0; i<a; i++)
            cin>>s[i];
        ll xi=1000000000000;
        ll yi=0;
        ll Hi=(xi+yi)/2;
        while(pnt--)
        {
            sum=0;
            Hi=(xi+yi)/2;
            for(int j=0; j<a; j++)
            {
                if(s[j]<Hi)
                sum+=Hi-s[j];
            }
            if(sum>c)
                xi=Hi;
            if(sum<c)
                yi=Hi;
        }
        cout<<Hi<<endl;
        tc--;
    }
    return 0;
}
