#include<stdio.h>
int reverse(int n)
{
	int rev=0,r;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
int main()
{
    int x;
    scanf("%d",&x);
    while(x)
    {
        int y;
        y=reverse(x)+x;
        if(y==reverse(y))
        {
            printf("%d",y);
            break ;
        }
        else
        x=y;
    }
    return 0;
}