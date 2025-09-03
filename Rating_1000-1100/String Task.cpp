#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int len=name.size();
    for (int i=0;i<len;i++)
    {
       if(name[i]=='A' || name[i]=='E' ||name[i]=='I' ||name[i]=='O' ||name[i]=='U' ||name[i]=='Y')
       continue;
       else if(name[i]=='a' || name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u' ||name[i]=='y')
       continue;
       else
       cout<<"."<<(char)tolower(name[i]);
     }
    cout<<endl;
    return 0;
}
