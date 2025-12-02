/*
    给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digits = 0;//define variables
    int arr[5];//define an array to store each digit
    //input
    //printf("Please enter an integer (not more than 5 digits:");
    scanf("%d", &num);
    temp = num;

    //calculate the number of digits and store each digit in the array
    while(temp != 0)
    {
        arr[digits] = temp % 10;//get the last digit
        temp /= 10;//remove the last digit
        digits++; //increase the digit count
    }
    //output the number of digits
    printf("%d\n", digits);
    //output each digit
    for (int i = digits - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //output the digits in reverse order
    for (int i = 0; i < digits; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}