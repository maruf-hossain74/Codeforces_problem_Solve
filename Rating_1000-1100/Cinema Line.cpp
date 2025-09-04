#include<bits/stdc++.h>
using namespace std;
int main()
{
    	int m;
        cin>>m;
        int A[m],TF=0,F=0,flag=0;
       for(int i=0; i<m; i++)
        	cin>>A[i];
        for(int i=0; i<m; i++)
        {
        	if(A[i]==25)
            TF++;
            else if(A[i]==50)
            {
            	if(TF>=1)
                {
                	TF--;
                    F++;
                }
                else
                {
                	flag=1;
                    break;
                }    
            }
            else if(A[i]==100)
            	{
                	if(F>=1 && TF>=1)
                    {
                    	F--;
                        TF--;
                    }
                    else if(F<1 && TF>=3)
                    TF-=3;
                    else
                    {
                    	flag=1;
                        break;
                    }    
                }
        }
        if(flag==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    return 0;
}
