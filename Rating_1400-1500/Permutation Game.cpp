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
        int n, x, a, b; cin>> n>> x>> a>> b;
        int A[n+1], B[n+1];
        A[0] = 0, B[0] = 0;
        for(int i = 1; i <= n; i++) {
            cin>> A[i];
        }
        for(int j = 1; j <= n; j++) {
            cin >> B[j];
        }
        int vp1= -1, vp2 = -1;
        map<int,int> mp1;
        map<int,int> mp2;
        int p1 = a, p2 = b, mn = x;
        int sum1 = 0, sum2 = 0;
        while(mp1[p1] != 2 && mn > 0) {
            
            mp1[p1]++;
            vp1 = max({vp1,mn*B[p1] + sum1});
            sum1 += B[p1];
            p1 = A[p1];
            mn--;
        }
        mn = x;
        while(mp2[p2] != 2 && mn > 0) {
            
            mp2[p2]++;
            vp2 = max({vp2,mn*B[p2]+sum2});
            sum2+=B[p2];
            p2 = A[p2];
            mn--;
        }
        //cout << vp1 << " " << vp2 << endl;
        if(vp1 > vp2) cout << "Bodya" << endl;
        else if(vp1 < vp2) cout << "Sasha" << endl;
        else cout << "Draw" << endl;
    }
	return 0;
}
