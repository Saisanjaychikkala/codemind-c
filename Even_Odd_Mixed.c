#include<stdio.h>
int check(int n)
{
    
    if(n%2==0)
    return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int rem,odd=0,even=0,c=0;
    while(n!=0)
    {
        rem=n%10;
        if(check(rem)==1)
        {
        odd++;
        }
        else
        {
        even++;
        }
        c++;
        n=n/10;
    }
    if(c==even)
    {
    printf("Even");
    }
    if(c==odd)
    {
    printf("Odd");
    }
    if(c!=even&&c!=odd)
    {
    printf("Mixed");
    }
    return 0;
}