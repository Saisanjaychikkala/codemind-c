#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int min;
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    for(i=min;i>0;i--)
    {
        int m,c=0;
        for(m=0;m<n;m++)
        {
            if(arr[m]%i==0)
            c++;
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
        
    }
    
    return 0;
}