#include <stdio.h>

int main(void)
{
    int i,num;
    printf("選択した１〜９の数の九九の段を表示します。\n１〜９の好きな数を入力して下さい。\n");
    scanf("%d",&num);

    while (!(num >= 1&&num <= 9)){
        printf("１〜９の範囲内で数を入力して下さい");
        scanf("%d",&num);
    } 
    
    for (i = 1;i <= 9;i++){
        
        if (i == 1){ printf("%d の段を表示します。\n",num);}

        printf("%d ✕ %d = %2d\n",num,i,num*i);
    }

    return 0;
    
}