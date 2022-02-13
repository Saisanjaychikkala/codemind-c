#include<stdio.h>
int main()
{
    int x,sum=0,n,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        int y=1,i;
        x=n%10;
        for(i=1;i<=x;i++)
        {
            y=y*i;
        }
        sum=sum+y;
        n=n/10;
    }
    if(sum==t)
    printf("The number %d is a strong number",t);
    else
    printf("The number %d is not a strong number",t);
    
}