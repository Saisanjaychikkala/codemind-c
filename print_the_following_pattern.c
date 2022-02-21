#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        int m=0;
        for(m=1;m<=i;m++)
        printf("%d",m);
        printf("
");
    }
    
    return 0;
}