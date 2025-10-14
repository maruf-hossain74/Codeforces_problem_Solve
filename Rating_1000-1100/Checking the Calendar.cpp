#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>M;
M["monday"]=1;
M["tuesday"]=2;
M["wednesday"]=3;
M["thursday"]=4;
M["friday"]=5;
M["saturday"]=6;
M["sunday"]=7;
string s1,s2;cin>>s1>>s2;
int x=(M[s2]-M[s1]+7)%7;
puts(x==0||x==3||x==2?"YES":"NO");
return 0;
}
