#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int lcm,i;
    for(i=n2;;i++)
    {
        if(i%n1==0&&i%n2==0)
        {
            printf("%d",i);
            break;
        }
    }
    
    
    return 0;
}