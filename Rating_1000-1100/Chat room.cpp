#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
        string S;
        cin>>S;
        int len=S.size();
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(S[i]=='h' && flag==0)
            flag=1;
            else if(S[i]=='e' && flag==1)
            flag=2;
            else if(S[i]=='l' && flag==2)
            flag=3;
            else if(S[i]=='l' && flag==3)
            flag=4;
            else if(S[i]=='o' && flag==4)
            flag=5;
        }
        if(flag==5)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
  return 0;
}
