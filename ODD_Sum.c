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
    int so=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            so+=arr[i];
        }
    }
    printf("%d",so);
    return 0;
}