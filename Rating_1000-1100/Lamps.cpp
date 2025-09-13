#include<bits/stdc++.h>
using namespace std;
main(){
	int T, n, x, y;
	cin >> T;
	while(T--){
	cin >> n;
	priority_queue<int>q[n+1];
	for(int i=0;i<n;i++){
		cin >> x >> y;
		q[x].push(y);
	}
	long long res=0;
	for(int i=1;i<=n;i++){
		int j=0;
		while(q[i].size()&&j<i){
			res+=q[i].top();
			q[i].pop();
			j++;
		}
	}
	cout<<res<<'\n';
	}
	return 0;
}
