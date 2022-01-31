#include<stdio.h>
int main()
{
	int dig,sqrnum,ssqrnum=0,num;
    scanf("%d",&num);
    sqrnum=num*num;
	while(sqrnum>0)
	{
		ssqrnum+=sqrnum%10;
		sqrnum=sqrnum/10;	
	}
	if(num==ssqrnum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
	return 0;
}