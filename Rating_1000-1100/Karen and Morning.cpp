#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,t=0;
	scanf("%d:%d",&m,&s);
	while(m/10+m%10*10!=s)
    {
		t++;
        ++s%=60;
		if(!s) ++m%=24;
	}
	printf("%d\n",t);
	return 0;
}
