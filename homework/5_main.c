// 202610125217
// 肖承祥

#include <stdio.h>
int main()
{
float a;
float b;
float result;
char op;

printf("请输入:数1 运算符 数2\n");
scanf("%f %c %f", &a, &op, &b);

if (op == '+')
{
    result = a + b;
    printf("结果为: %.2f\n", result);
}
else if (op == '-')
{
    result = a - b;
    printf("结果为: %.2f\n", result);
}
else if (op == '*')
{
    result = a * b;
    printf("结果为: %.2f\n", result);
}
else if (op == '/')
{
    if (b == 0)
    {

        printf("错误: 除数不能为零。\n");
       }
    else
    {
          result = a / b;
        printf("结果为: %.2f\n", result);
       
    }
}
else
{
    printf("错误: 不支持的运算符。\n");
}
return 0;
}