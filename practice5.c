#include <stdio.h>

int main(void)
{
    int score = 0;

    do{
        if (score != 0) printf("点数は、０〜１００の範囲で入力して下さい。\n");
        printf("テストの点数を０〜１００の間で入力して下さい。\n");
        scanf("%d",&score);
    } while(score < 0 || score > 100);

printf("入力された点数は %d 点です。\n",score);

return 0;
}
