#include<stdio.h>

int main()
{
    //define three variables
    int a, b, c;

    //read input
    scanf("%d %d %d", &a, &b, &c);

    //find the maximum value
    int max = a;
    if (b > max)
        max = b;
    if(c > max)
        max = c;
    //output the maximum value
    printf("%d\n", max);

    return 0;
}