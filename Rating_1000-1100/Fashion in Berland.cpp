#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x)num++;
	}
	if(n==1)cout<<(num==0?"NO":"YES");
	else cout<<(num==n-1?"YES":"NO");
}
