#include<stdio.h>
int palindrome(int n)
{
    int rem,rd=0;
    while(n!=0)
    {
        rem=n%10;
        rd=rd*10+rem;
        n=n/10;
    }
    return rd;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       int a=0;
       scanf("%d",&a);
       if(palindrome(a)==a)
       printf("True");
       else
       printf("False");
       printf("
");
    }
    
}