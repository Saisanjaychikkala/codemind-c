#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==0)
    return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void divisors(int x)
{
    int m,c=1;
    for(m=1;m<=x;m++)
    {
        if(x%m==0&&prime(m)==0)
        c++;
    }
    printf("%d",c);
}
int main()
{
    int a;
    scanf("%d",&a);
    divisors(a);
}