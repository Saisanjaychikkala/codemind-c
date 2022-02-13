#include<stdio.h>
#include<math.h>
int reverse(int n)
{
    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(pow(a,2)==reverse(pow(reverse(a),2)))
    printf("True");
    else
    printf("False");
    
    return 0;
}