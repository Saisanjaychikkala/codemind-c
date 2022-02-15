#include<stdio.h>
int main()
{
    int n,i,m,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        m=t;
        for(m=t;m<=n;m++)
        {
            printf("%d ",m);
        }
        printf("
");
        
    }
    
    return 0;
}