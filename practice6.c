#include <stdio.h>

int olympic(int year); //プロトタイプ宣言

int main(void)
{
    int year,hold;
    printf("西暦を入力して下さい。\n");
    scanf("%d",&year);

    hold = olympic(year);

    switch (hold){
        case 0:
        printf("オリンピックは開催されません。\n");
        break;
        case 1:
        printf("夏季オリンピック\n");
        break;
        case 2:
        printf("冬季オリンピック\n");
        break;
    };

    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0){
            if(year % 4 ==0){
                return 1;
            } else {
                return 2;
            }
    } else {
        return 0;   
    }
}