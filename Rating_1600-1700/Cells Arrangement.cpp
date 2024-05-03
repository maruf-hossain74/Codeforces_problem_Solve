#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define int int64_t
#define ll long long int
#define mod 1000000007
int power(int a, int b) {
    if(b == 0) return 1;
    int value = power(a, b/2);
    if(b % 2 == 0) return (value * value) % mod;
    else return (value * value * a) % mod;
}
int f(int n) {
    return (3*n*n - 5*n +2) / 2;
}
int t = 1;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin >> t;
    while(t--) {
        int n; cin>> n;
        for(int i = 1; i <= n; i++)
            cout<<i<<' '<<i-(i==2)<<' ' << endl;
        cout << endl;
    }
	return 0;
}
