#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<3)
        printf("-1");
    else{
        while(n>0)
            printf("%d ",n--);
    }
}
