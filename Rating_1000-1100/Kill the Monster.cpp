#include <bits/stdc++.h>
using namespace std;
long long t,ph,pa,mh,ma,k,h,a,flag;
int main() {
	cin>>t;
	while(t--){flag=1;cin>>ph>>pa>>mh>>ma>>k>>a>>h;
	for(int i=0;i<=k;i++) 
	if((mh+(pa+(k-i)*a)-1)/(pa+(k-i)*a)<=((ph+i*h)+ma-1)/ma){
	cout<<"Yes"<<endl;flag=0;break;} 
	if(flag)cout<<"No"<<endl;}
	return 0;
}
