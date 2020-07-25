#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);

    if (num >= 8 && num <= 12) printf("入力値は、８〜１２の間です。\n");

    if (!(num >= 8 && num <= 12)) printf("入力値は、８〜１２の間ではありません。\n");

    return 0;

}