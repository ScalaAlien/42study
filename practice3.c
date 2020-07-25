#include <stdio.h>

int main(void)
{
    int price,pricedown10p,pricedown30p,pricedown50p,pricedown80p;

    /* 定価の入力 */
    printf("定価を入力して下さい。");
    scanf("%d",&price);

    /* 割引額の計算 */
    pricedown10p = (int) price * (1-0.1);
    pricedown30p = (int) price * (1-0.3);
    pricedown50p = (int) price * (1-0.5);
    pricedown80p = (int) price * (1-0.8);

    /* 割引額の表示 */
    printf("１割引は %d 円です\n",pricedown10p);
    printf("３割引は %d 円です\n",pricedown30p);
    printf("５割引は %d 円です\n",pricedown50p);
    printf("８割引は %d 円です\n",pricedown80p);

    return 0;

}