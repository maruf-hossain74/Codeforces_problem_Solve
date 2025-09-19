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

using namespace std;

#define YES     cout<<"YES"<<"\n"

#define NO      cout<<"NO"<<"\n"

#define ssortS  sort(S.begin(),S.end())
#define asortA  sort(A,A+n)
#define srevS   reverse(S.begin(),S.end())
#define arevA   reverse(A,A+n)
#define ll      long long

int main()
{
	int n,k;
	cin>>n>>k;
	//for impossible
	if(n==1 && k==0) cout<<0<<" "<<0<<"\n";
	else if((n*9<k)||(n>1 && k==0)) cout<<-1<<" "<<-1<<"\n";
	else
    {
        //for minimum value
        char A[n];
        int sd= k;
        A[0] = '1';
        sd--;
        for(int i = n-1; i>=1; i--)
        {
            if(sd == 0)
                A[i] = '0';
            else if(sd>=9)
            {
                A[i]='9';
                sd-=9;
            }
            else
            {
                A[i] = sd + '0';
                sd = 0;
            }
        }

        if(sd>0)
            A[0] = (sd+1) + '0';
        for(int i =0; i<n; i++)
            cout<<A[i];
            cout<<" ";


        //for max value
        char B[n];
        int ed= k;
        for(int i = 0; i<n; i++)
        {
            if(ed == 0)
                B[i] = '0';
            else if(ed>=9)
            {
                B[i]='9';
                ed-=9;
            }
            else
            {
                B[i] = ed + '0';
                ed = 0;
            }
        }
        for(int i =0; i<n; i++)
            cout<<B[i];
            cout<<endl;
    }
    return 0;
}
