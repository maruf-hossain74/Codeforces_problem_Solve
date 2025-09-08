#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string r,s;
        cin>>s;
        r='0' + s;
        s='0'+s;
        int sz= r.size(), flag=0;
        for(int i=sz-1; i>=0; i--)
        {
            if(s[i]-'0'>=5)
            {
                s[i]='0';
                if(s[i-1]!='9')
                    s[i-1]++;
            }
        }
        for(int i=0; i<sz; i++)
        {
            if(s[0]=='0' && flag==0)
            {
                flag=1;
                continue;
            }
            else if(flag==2)
                cout<<'0';
            else if(s[i]==r[i] && flag==1)
                cout<<s[i];
            else
            {
                cout<<s[i];
                flag=2;
            }
        }
        cout<<"\n";
    }
    return 0;
}
