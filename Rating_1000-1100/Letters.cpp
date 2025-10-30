#include <bits/stdc++.h>
using namespace std;
long long n,m,x;
long long a[300000];
int main(){
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1,id=0;i<=m;++i){
		cin >> x;
		while(a[id]<x)id++;
		cout <<id << ' ' << x-a[id-1] << endl;
	}
}
