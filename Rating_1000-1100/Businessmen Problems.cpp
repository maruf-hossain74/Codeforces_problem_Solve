#include<bits/stdc++.h>
using namespace std;
 
uint64_t n,i,a,b;
map<int,int> m;
 
int main() {
	for(cin >> n;n--;)
		cin >> a >> b, m[a]=b;
	for(cin >> n;n--;)
		cin >> a >> b, m[a]<b?m[a]=b:0;
	a=0;
	for(auto e:m)
		a+=e.second;
	cout << a;
}
