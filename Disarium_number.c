#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dig=0,temp;
    temp=n;
    while(n!=0)
    {
        n=n/10;
        dig++;
    }
    int temp_2;
    temp_2=temp;
    int rem,sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=pow(rem,dig);
        dig--;
        temp=temp/10;
    }
    if(sum==temp_2)
    printf("True");
    else
    printf("False");
    return 0;
}