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
#define ssort(x)  sort((x).begin(),(x).end())
#define asort(x)  sort((x),(x)+(x).size())
#define srev(x)   reverse((x).begin(),(x).end())
#define suni(s)    unique((s).begin(),(s).begin()+(s).size())-(s).begin()
#define arevA   reverse(A,A+n)
#define ll      long long
#define ull     unsigned long long
#define pb      push_back

int main()
{
    ll n,m,mn,flag;
    cin>>n>>m;
    ll A[n],B[n-m+1];
    ll sum = 0;

    for(int i = 0,j = 0; i<n; i++)
    {
        cin>>A[i];
        sum+=A[i];
        if(i>=m-1)
        {
            B[j] = sum;
            sum -= A[i-m+1];
            if(j==0)
            {
                mn = B[j];
                flag = 1;
            }

            if(mn>B[j])
            {
                flag = i-m+2;
                mn = B[j];
            }
            j++;
        }
    }
    cout<<flag<<endl;
    return 0;
}
