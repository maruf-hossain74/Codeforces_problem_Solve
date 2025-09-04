#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str1,str2;
    int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {
    	string A;
         cin>>A;
       if(i==0)
       {
       	str1=A;
           s1++;
       }    
       else if( A!=str1)
       {
       	str2=A;
           s2++;
       }
       else if(A==str1)
       s1++;
    }
    if(s1>s2)
    cout<<str1<<"\n";
    else
    cout<<str2<<"\n";
    return 0;
}
