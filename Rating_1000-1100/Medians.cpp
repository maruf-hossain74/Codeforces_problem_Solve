#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==1){
		    cout<<1<<endl<<1<<endl;
		    continue;
		    
		}
		if(n==k||k==1){
		    cout<<-1<<endl;
		    continue;
		    
		}
		int p2=k-k%2;
		int p3=k+1+k%2;
		cout<<3<<endl<<1<<" "<<p2<<" "<<p3<<endl;
	}
	return 0;
}
