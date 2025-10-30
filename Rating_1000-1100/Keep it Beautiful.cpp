#include<bits/stdc++.h>
using namespace std;
 
int main(){
int T;
cin>>T;
while(T--){
	int q;
	cin>>q;
	int x;
	cin>>x;
	cout<<1;
	int pr=x;
	bool tr=1;
	int mn=x,mx=1e9+10;
	for (int i = 1; i < q; ++i)
	{
		cin>>x;
		if(x>=mn&&x<=mx){mn=x;cout<<1;}
		else{if(tr&&x<=pr){cout<<1;mn=x;mx=pr;tr=0;}
		else{cout<<0;}}
	}
	cout<<endl;
}
}
