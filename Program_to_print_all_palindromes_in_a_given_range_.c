#include<stdio.h>
int reverse(int n)
{
    int rev=0,r;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int r1,r2,i;
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
