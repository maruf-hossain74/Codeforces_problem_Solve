#include<bits/stdc++.h>
using namespace std;
int cnt[5];
int d[]={0,1,-1,2,-2,3,-3,4,-4};
string s[]={"S","M","L","XL","XXL"};
int main()
{
	for(int i=0;i<5;i++)
		cin>>cnt[i];
	int n,id;
	string str;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		if(str=="S")
			id=0;
		else if(str=="M")
			id=1;
		else if(str=="L")
			id=2;
		else if(str=="XL")
			id=3;
		else
			id=4;
		for(int j=0;j<9;j++)
		{
			if(id+d[j]>=0&&id+d[j]<5&&cnt[id+d[j]]>0)
			{
				cnt[id+d[j]]--;
				cout<<s[id+d[j]]<<endl;
				break;
			}
		}
	}
	return 0;
}
 	 	   	    	 		 		 		   				
