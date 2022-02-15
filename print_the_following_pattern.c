#include<stdio.h>
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    X:for(i=n;i>0;i--)
    {
        
        printf("%d ",i);
    }
    printf("
");
    c++;
    if(n>=c)
    {
    goto X;
    }
    return 0;
}