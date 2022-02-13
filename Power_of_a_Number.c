#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,res,r;
    scanf("%d%d%d",&x,&y,&m);
    r=pow(x,y);
    res=r%m;
    printf("%d",res);
    return 0;
}