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
const int A=100000000000000LL,N=228228;

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
/*
vector<int> a[N];
int c[N],o,x,y,i,j,n,m;

void go(int v,int pr,int k)
{
	if(k>m)
        return;
	int ok=1;
	for(int i=0;i<a[v].size();i++)
	{
	    if(a[v][i]!=pr)
        {
            ok=0;
            go(a[v][i],v,k*c[a[v][i]]+c[a[v][i]]);
        }
	}
	o+=ok;
}
*/


void simpleSieve(long long limit, vector<long long> &primes) {
    vector<bool> isPrime(limit + 1, true);

    for (long long p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (long long i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (long long p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
}

void segmentedSieve(long long low, long long high) {
    long long limit = static_cast<long long>(sqrt(high)) + 1;
    vector<long long> primes;
    simpleSieve(limit, primes);

    long long n = high - low + 1;
    vector<bool> isPrime(n, true);

    for (long long i = 0; i < primes.size(); ++i) {
        long long loLim = max(primes[i] * primes[i], (low + primes[i] - 1) / primes[i] * primes[i]);
        for (long long j = loLim; j <= high; j += primes[i]) {
            isPrime[j - low] = false;
        }
    }

    for (long long i = max(2LL, low); i <= high; ++i) {
        if (isPrime[i - low]) {
            cout << i << " ";
        }
    }
}

int t = 1;
int32_t main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
	//cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        if(n%3 == 0) cout<<n/3<<" "<<n/3<<" "<<n/3<<"\n";
        else if(n%2 == 1) cout<<1<<" "<<n/2<<" "<<n/2<<"\n";
        else if((n/2)%2 == 0) cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
        else cout<<2<<" "<<(n/2)-1<<" "<<(n/2)-1<<"\n";
    }
	return 0;
}
/*
cin>>n>>m;
	for(i=0;i<n;i++)
        scanf("%d",&c[i]);
	for(i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        x--;
        y--;
        a[x].pb(y);
        a[y].pb(x);
    }
	go(0,-1,c[0]);
	cout<<o<<"\n";

*/
