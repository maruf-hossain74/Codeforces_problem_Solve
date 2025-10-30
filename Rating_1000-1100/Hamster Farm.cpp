#include<ios>
long long n,k,a[100005],mi=1e18+5,m;
int main()
{
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=k;++i)
	{
		scanf("%lld",&a[i]);
		if(n%a[i]<mi)mi=n%a[i],m=i;
	}
	printf("%lld %lld",m,n/a[m]);
}
