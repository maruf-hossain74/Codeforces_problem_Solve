#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string s1[10]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
	for(int i=0;i<8;i++){
		if(s1[i].size()==n){
			int c=0;
			for(int j=0;j<n;j++){
				if(s[j]!='.'&&s[j]!=s1[i][j]){
					c=1;
				}
			}if(c==0) {
				cout<<s1[i];
				return 0;
			}
		}
	}

}
