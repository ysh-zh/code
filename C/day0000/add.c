/*
    输入两个整数a和b，计算a+b的和
    多组测试数据，即需要不停的接收系统的测试输入，你都可以计算结果并输出
*/

#include<stdio.h>

int main()
{
    int a, b;   //接受输入
    //不停的接收输入，直到文件结束
    while (scanf("%d %d", &a, &b) != EOF)
    {
        //计算并输出结果
        printf("%d\n", a + b);
    }
    return 0;
}