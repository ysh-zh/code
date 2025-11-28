/*
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
*/
#include<stdio.h>
int f(int n)
{

    if( n == 1 )
    {
        return n;
    }
    else if (n == 2 || n == 3)
    {
        return n;
    }
    else
    {
        return f(n - 1) + f(n - 3);
    }


}
int main()
{
    //define a integer variable saving the year
    int n ;
    
    while(1)
    {
    // read input
    if (scanf("%d", &n) != 1)
    {
       // invalid input,exit
        break;
    }
    // check for termination condition
    if (n == 0)
    {
        break; // break the loop 
    }

    //ensure the input is non-negative
    if (n < 0)
    {
        printf("年份不能为负数，请重新输入。\n");
        continue;
    }
    //calculate the number of cows
    int result = f(n);
    //output the result
    printf("%d\n", result);
    }
    // end
    return 0;
}