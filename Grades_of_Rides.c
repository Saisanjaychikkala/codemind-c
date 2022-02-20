#include<stdio.h>
int main()
{
    int hf,spf,sdf;
    scanf("%d %d %d",&hf,&spf,&sdf);
    if(hf>50&&spf>60&&sdf>100)
    printf("10");
    else if(hf>50&&spf>60&&sdf<100)
    printf("9");
    else if(hf<50&&spf>60&&sdf>100)
    printf("8");
    else if(hf>50&&spf<60&&sdf>100)
    printf("7");
    else if(hf>50||spf>60||sdf>100)
    printf("6");
    else if(hf<=50&&spf<=60&&sdf<=100)
    printf("5");
    return 0;
}