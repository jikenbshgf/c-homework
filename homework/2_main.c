// 202610125217
// 肖承祥

#include <stdio.h>
int main()
{
float a;

printf("请输入一个实数：");

scanf("%f",&a);

if(a>0)
{
    printf("正数\n");
}
else if(a<0)
{
    printf("负数\n");
}
else
{
    printf("零\n");
}

    return 0;
}