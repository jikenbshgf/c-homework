// 202610125217
// 肖承祥

#include <stdio.h>
int main(void)
{
float a;
float b;
float c;

printf("请输入三条边长：");
scanf("%f %f %f", &a, &b, &c);
if(a+b>c && a+c>b && b+c>a)
{
    printf("能构成三角形\n");
}
else
{
    printf("不能构成三角形\n");
}

    return 0;
}