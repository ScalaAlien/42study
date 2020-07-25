#include <stdio.h>

int main(void)
{
    int score;
    printf("点数を入力して下さい。\n");
    scanf("%d",&score);

    if ( score > 100 ){
        printf("入力が１００より大きいので訂正します。\n");
        score = 100;
    }

    printf("点数は %d 点です。\n",score);

    return 0;
}