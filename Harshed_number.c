#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,sum=0,temp;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}