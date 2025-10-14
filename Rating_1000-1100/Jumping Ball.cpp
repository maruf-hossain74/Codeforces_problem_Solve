#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0, q = 0;
    while(s[p] == '<' && p < s.size()){
        q++;
        p++;
    }
    p = s.size()-1;
    while(s[p] == '>' && p >= 0){
        q++;
        p--;
    }
    cout << q;
}
