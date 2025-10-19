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
#define speed (ios_base:: sync_with_stdio(false),cin.tie(NULL))

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

int gcd(int a,int b){
    int  x = max({a,b});
    int  y = min({a,b});
    int rem = x%y;
    while(rem!=0){
    x = y; y = rem;
    rem = x%y;}
    return y;
}

int lcm(int x, int y)
{ return ((x*y)/gcd(x,y)); }

int npr(int n, int r)
{
    int ans = 1;
    for(int i = n - r + 1 ; i <= n ; i++)
        ans*=i;
    return ans;
}
int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}



bool prime_check(int n)
{
    if(n<2) return false;
    else if(n <4) return true;
    else if(n%2==0) return false;
    else
    {
        for(int i = 3; i<=sqrt(n); i+= 2)
        {
            if(n%i==0) return false;
        }
        return true;
    }
}

int t = 1;
int32_t main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
	//cin>>t;
	while(t--)
    {
        int n; cin>>n;
        int A[n];
        for(int i = 0 ; i < n; i++)
            cin>>A[i];
        int s1 = -1, s2 = 0,ea = 0 , eb = n-1;
        int suma = 0,ans = 0;
        int sumb = 0;
        bool flag = false;
        for(int i = 0 ; i < n; i++)
        {
            if(s1<s2)
            {
                s1 = 0;
                for(int j = ea; j <= eb; j++)
                {
                    s1 += A[j];
                    if(s1>s2)
                    {
                        suma += s1;
                        ea = j+1;
                        ans++;
                        break;
                    }
                    if(j == eb)
                    {
                        suma += s1;
                        ans++;
                        flag = true;
                        break;
                    }
                }
            }
            else if(s1>s2)
            {
                s2 = 0;
                for(int j = eb; j >= ea; j--)
                {
                    s2 += A[j];
                    if(s1<s2)
                    {
                        sumb += s2;
                        eb = j-1;
                        ans++;
                        break;
                    }
                    if(j == ea)
                    {
                        sumb += s2;
                        ans++;
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        cout<<ans<<" "<<suma<<" "<<sumb<<"\n";
    }
	return 0;
}

