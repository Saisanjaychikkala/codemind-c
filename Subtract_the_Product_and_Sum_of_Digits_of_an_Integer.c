#include<stdio.h>
int main()
{
	int d,n,s=0,p=1,r;
	scanf("%d",&n);  //n=123  n=12
	X:if(n>0)
	{    
	r=n%10;   //r=3   r=2
	n=n/10;   //12    1
	s+=r;     //s=3   s=5
	p*=r;     //p=3   p=6
	goto X;
    }
    d=p-s;    //6-6=0
	printf("%d",d);
	return 0;
	
}