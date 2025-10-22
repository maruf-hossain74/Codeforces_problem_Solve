/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
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
#include <queue>
#include <climits>

using namespace std;

#define pi      3.1415926535897932384626433832795028841971693993751058
#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"
#define NO      cout<<"NO"<<"\n"
#define No      cout<<"No"<<"\n"
#define no      cout<<"no"<<"\n"
#define m1      cout<<-1<<"\n"
#define ssort(S)  sort((S).begin(),(S).end())
#define asort(A)  sort((A),(A)+(n))
#define srev(S)   reverse((S).begin(),(S).end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n)    lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define arev(A)   reverse((A),(A)+(n))
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>
#define input(x) scanf("%d",&(x))
#define int int64_t
#define endl "\n"
#define speed (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define mod 1000000007

string dtob(int n){
     string m = "";
    while(n!=0){ if(n%2==0)
    m='0'+m; else m='1'+m;
    n/=2; } return m;}
int btod(string s){
    int sz = s.size(),des = 0;
    reverse(s.begin(),s.end());
    for(int i = 0; i<sz; i++)
        if(s[i] == '1') des += pow(2,i);
    return des;
}


int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int tt;
        vector<int> v1;
        vector<int> v2;
        cin >> tt;
        while(tt--) {
            int n; cin>>n;
            int A[n];
            for(int i = 0; i < n; i++) {
                cin >> A[i];
            }
            sort(A, A + n);
            v1.push_back(A[0]);
            v2.push_back(A[1]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0, k;
        for(int i = 0 ; i < v1.size(); i++) {
            if(i == 0) {
                k = min({v1[0], v2[0]});
            }
            else {
                k = max({v1[i], v2[i]});
            }
            ans += k;
        }
        cout<< ans <<endl;
    }
	return 0;
}

		  		 				 		  	   		  						
