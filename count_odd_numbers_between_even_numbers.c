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
    int c=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i]%2!=0 && arr[i+1]%2==0 && arr[i-1]%2==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}
