#include<bits/stdc++.h>
using namespace std;
int a,b,n,i,k,r[100002],t,d;
string s;
main(){
	cin>>n>>s;
	for (i=0; i<n; i++){
		cin>>r[i];
	}
	for (i=0; i<=n; i++){
		if (k<0 || k>=n) {cout<<"FINITE"; return 0; }
		if (s[k]=='>') k=k+r[k]; else k=k-r[k];
	}
		cout<<"INFINITE";
	}
