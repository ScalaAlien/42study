#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    
    if(num == 10) printf("入力値は １０ です。\n");

    if(num > 10) printf("入力値は　１０　より大きいです。\n");

    if(num < 10) printf("入力値は　１０　より小さいです。\n");

    return 0;
}