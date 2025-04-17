#include<bits/stdc++.h>
using namespace std;

int main()
{   
   
   string s,t;

   getline(cin,s);
   getline(cin,t);

   map<char,int> m1,m2;

   for(auto it:s) { if(it!=' ') m1[it]+=1; }
   for(auto it:t) { if(it!=' ') m2[it]+=1; }
   
   int chk=1;
   for(auto it:m2)
   {
       if(it.second > m1[it.first]) chk=0;
   }

   if(chk) cout<<"YES";
   else cout<<"NO";
}
