#include<stdio.h>
int main()
{
    int  l,b,w,c;
    int  a,A;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=l*b;
    A=((l+(2*w))*(b+(2*w)));
    int tc;
    tc=(A-a)*c;
    printf("%d",tc);
    
    
    return 0;
}