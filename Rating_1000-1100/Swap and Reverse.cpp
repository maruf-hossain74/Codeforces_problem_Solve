#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k%2==0)
        {
            sort(s.begin(), s.end());
            cout<<s<<"\n";
        }
        else
        {
            string A, B;
            for (int i=0; i<n; i++)
            {
                if (i%2)
                 B+=s[i];
                else
                 A+=s[i];
            }
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());
            int ax=0, bx=0;
            for (int i=0; i<n; i++)
            {
                if (i%2) 
                cout<<B[bx++];
                else
                 cout<<A[ax++];
            }
            printf("\n");
        }
    }
}
