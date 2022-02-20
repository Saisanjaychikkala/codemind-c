#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,nd=0;
    while(n!=0)
    {
        rem=n%10;
        nd=nd*10+rem;
        n=n/10;
    }
    printf("%d",nd);
    return 0;
}