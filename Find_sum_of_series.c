#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%.2f",sum);
    return 0;
}