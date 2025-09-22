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

using namespace std;

#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"

#define ssortS  sort(S.begin(),S.end())
#define asortA  sort(A,A+n)

int main()
{
    string st;
    cin>>st;
    int sz = st.size();
    int A[sz],count = 0;
    A[0] = 0;
    for(int i = 1; i<sz; i++)
    {
          if(st[i] == st[i-1])
            count++;
          A[i] = count;
    }
    int qu;
    cin>>qu;
    while(qu--)
    {
        int m,l;
        cin>>m>>l;
        cout<<A[l-1] - A[m-1]<<"\n";
    }
    return 0;
}
