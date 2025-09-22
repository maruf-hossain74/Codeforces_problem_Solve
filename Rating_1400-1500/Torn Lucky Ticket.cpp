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
#define int long long

int tsum[200012];
char str[200012][10];
signed main()
{

	map<pair<int,int>,int>m;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    //cin>>str[i];
		scanf("%s",str[i]);
		int l=(int)strlen(str[i]);
		int ssum=0;
		for(int j=0;j<l;j++)
		    ssum += str[i][j]-'0';
		for(int j=0;j<l;j++)
		{
			tsum[i] += str[i][j]-'0';
			m[{2*tsum[i]-ssum,2*(j+1)-l}]++;
			//cout<<ssum<<endl;
		}
	}
	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		int l=strlen(str[i]);
		ans += m[{tsum[i],l}]+m[{-tsum[i],-l}];
		//cout<<ans<<endl;
	}
	cout<<ans<<"\n";
}
