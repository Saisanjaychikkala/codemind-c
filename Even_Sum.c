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
        if(arr[i]%2==0)
        {
            se+=arr[i];
        }
    }
    printf("%d",se);
    return 0;
}