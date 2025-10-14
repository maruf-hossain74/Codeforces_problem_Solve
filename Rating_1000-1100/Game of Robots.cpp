#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];

for ( int i=0;i<n;i++){
	cin>>a[i];
}
int i=1;
while (k>i){
	k-=i;
	i++;
}
cout<<a[k-1];
}

