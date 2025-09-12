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
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        ll A[n],B[n];
        ll  sum=p;
        vector<pair<ll,ll >>M;
        for(ll i=0; i<n; i++)
            cin>>A[i];
        for(ll i= 0 ; i<n; i++)
            cin>>B[i];
        for (ll i=0; i<n; i++)
            M.push_back( make_pair(B[i],A[i]));
        sort(M.begin(), M.end());
        //for (int  i=0; i<n; i++)
            //cout<<M[i].first<<' '<<M[i].second<<endl;
        n-=1;
        for(ll i=0;1; i++)
        {
            if(n-M[i].second>=0 && p>=M[i].first)
            sum +=(M[i].second)*(M[i].first);
            else if(p>=M[i].first)
            sum += n * M[i].first;
            //cout<<n<<endl;
            else
            {
                 sum += n*p;
                 n=0;
            }

            n-=M[i].second;
            if(n<=0 || p<M[i].first) break;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
