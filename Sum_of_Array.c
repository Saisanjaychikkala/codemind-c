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
    int se=0;
    for(i=0;i<n;i++)
    {
         se+=arr[i];
    }
    printf("%d",se);
    return 0;
}