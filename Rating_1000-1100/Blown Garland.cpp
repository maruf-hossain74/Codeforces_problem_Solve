#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
    cin>>S;
    int len=S.size();
    char A[4],B[]={'R','B','Y','G'};
    int f1=0, f2=0, f3=0, f4=0;
    for(int i=0; i<len; i++)
    {
    	if(i%4==0)
        {
        	if(S[i]!='!')
        		A[0]=S[i];
            else
            	f1++;
        }
        else if(i%4==1)
        {
        	if(S[i]!='!')
        		A[1]=S[i];
           else
            f2++;
        }
        else if( i%4==2)
        {
        	if(S[i]!='!')
        	A[2]=S[i];
            else
            f3++;
        }
        else if( i%4==3)
        {
        	if(S[i]!='!')
        	A[3]=S[i];
            else
            f4++;
        }
    }
        for(int i=0; i<4; i++)
        {
        	if(B[i]==A[0])
            cout<<f1<<" ";
            else if(B[i]==A[1])
            cout<<f2<<" ";
           else if(B[i]==A[2])
            cout<<f3<<" ";
           else if(B[i]==A[3])
            cout<<f4<<" ";
        }
        cout<<"\n";
return 0;
}
