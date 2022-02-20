#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,rd=0;
    while(n!=0)
    {
        rem=n%10;
        rd=rd*10+rem;
        n=n/10;
    }
    printf("%d",rd);
    return 0;
}