#include<stdio.h>
long long a[1000001];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d%d",&n,&m),m%=n+1,a[n]=n*(n+1ll)>>1;
		for(int i=0;i<n;i++)
			scanf("%lld",a+i),a[n]-=a[i];
		for(int i=(n-m+1)%(n+1);i!=n-m;i=(i+1)%(n+1))
			printf("%lld ",a[i]);
		puts("");
	}
	return 0;
}
	 	 	 	 			   		   	 	     	
