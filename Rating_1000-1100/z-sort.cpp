#include <bits/stdc++.h>
using namespace std;
int n, a[1008];
int main(){cin>>n;	for(int i=1;i<=n;i++)cin>>a[i];	sort(a+1,a+n+1);int l=1,r=n;for(int i=1;i<=n;i++){if(i%2==1) {cout<<a[l]<<" ";l++;}	else{cout<<a[r]<<" ";r--;}	}}
