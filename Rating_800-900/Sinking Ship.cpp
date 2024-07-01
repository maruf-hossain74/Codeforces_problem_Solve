//Sinking Ship
//coding c++ mobile app

#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    map<string,string>m;
    string s,t;
    cin>>n;
    while(n--) {
        cin>>s>>t;
        if(t=="child") t="woman";
        m[t] += s+'\n';
    }
    cout<<m["rat"]<<m["woman"]<<m["man"]<<m["captain"];
    return 0;
}
  			  			  	  					  				 	 		
