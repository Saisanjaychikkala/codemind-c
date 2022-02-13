#include<stdio.h>
int main()
{
	int n,rn=0,r,t;
	scanf("%d",&n);
	t=n;
	while(n)
	{
		r=n%10;
		rn=rn*10+r;
		n=n/10;
	}
	if(t==rn)
	{
	printf("True");
}
	else
	{
	printf("False");
}
}