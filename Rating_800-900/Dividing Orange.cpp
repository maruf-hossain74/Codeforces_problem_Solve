#include<bits/stdc++.h>
using namespace std;
bitset<1001>u;
int a[50],l=1,n,k;
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		u[a[i]]=1;
	}
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
		int j=n-1;
		while(j--){
			while(u[l]){
			    l++;
			}
			cout<<" "<<l++;
		}
		cout<<endl;
	}
	return 0;
}
