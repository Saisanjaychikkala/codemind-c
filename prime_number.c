#include<stdio.h>
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>2)
    printf("not a prime");
    else
     printf("prime");
    
    return 0;
}