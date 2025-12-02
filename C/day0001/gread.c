/*
    给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
*/
#include <stdio.h>

int main()
{
    int score;//define score
    scanf("%d", &score);
    switch (score)
    {
    case 90 ... 100:
        printf("A\n");
        break;
    case 80 ... 89:
        printf("B\n");
        break;
    case 70 ... 79:
        printf("C\n");
        break;
    case 60 ... 69:
        printf("D\n");
        break;
    case 0 ... 59:
        printf("E\n");
        break;

    default:
        break;
    }

    return 0;
}