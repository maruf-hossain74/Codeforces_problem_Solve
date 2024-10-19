#include<bits/stdc++.h>
using namespace std;
 
const int N=111;
char s[N];
 
bool ok(int i,int j){
	return abs(i/3-j/3)<=1&&abs(i%3-j%3)<=1;
}
 
int main()
{
	scanf("%s%s%s",s, s+3, s+6);
	string t="CCC",l;
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			for(int k=0; k<9; k++)
			{
				if(i!=j&&j!=k&&k!=i&&ok(i,j)&&ok(j,k))
				{
					l=s[i]; l+=s[j]; l+=s[k]; t=min(t,l);
				}
			}
		}
	}
	cout<<t<<endl;
}