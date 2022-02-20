#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,large=0;
    while(n!=0)
    {
        rem=0;
        rem=n%10;
        if(rem>large)
        large=rem;
        n=n/10;
    }
    printf("%d",large);
    return 0;
}