#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = true;
 
    for(int i = 1; i < s.size(); i++)
    {
        if(islower(s[i]))
            flag = false;
    }
    if(flag== true)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(islower(s[j])) //for first character.
                cout<<(char)toupper(s[j]);
            else // for others
                cout<<(char)tolower(s[j]);
        }
        cout<<"\n";
    }
    else
    {
    	for(int j=0; j<s.size(); j++)
        cout << s[j];
        cout<<"\n";
        }
    return 0;
}
