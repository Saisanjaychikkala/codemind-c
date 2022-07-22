#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int so=0,se=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            se+=arr[i];
        }
        else
        {
            so+=arr[i];
        }
    }
    int diff=se-so;
    printf("%d",diff);
    return 0;
}
