#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   
#define tc ll t; cin>>t; while(t--)
 
int main() {
 
            
    string s; cin>>s; 
    int n = s.size(), sum = 0;;
 
    pair<int,int> p[n];
 
    for(int i=0;i<n;i++) {  
 
        p[i] = {sum,n-i-1};
 
        if(s[i] == '(') sum++;
        else sum--;
       
    }
    sort(p,p+s.length());
    for(auto i : p) cout<<s[n-1-i.second];
    
}
