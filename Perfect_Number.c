#include<stdio.h>
int divisors(int x)
{
    int m,sum=0;
    for(m=1;m<x;m++)
    {
        if(x%m==0)
        sum=sum+m;
    }
    return sum;
}
int main()
{
    int a,i,t=0,c;
    scanf("%d",&a);
    if(divisors(a)==a)
    printf("True");
    else
    printf("False");
}