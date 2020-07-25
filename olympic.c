#include <stdio.h>

int main(void)
{
    /*　西暦年の宣言　*/
    int year;

    printf("オリンピック開催の年（西暦年）かどうか判定します。\n西暦年の入力してくだい。\n");
    scanf("%d",&year);

    /* １９９２年より以前の西暦が入力された場合 */
    if ( year < 1992 && year % 4 == 0 ) 
    printf("夏季と冬季のオリンピック開催年です。。\n");

    /* オリンピックの開催年の判定 */
    if ( year >=1992 && year % 4 == 0 )
        printf("西暦 %d 年は夏季オリンピックの開催年です。\n",year); //夏季オリンピックの判定

    if ( year >=1992 && year % 2 == 0 && year % 4 != 0)
        printf("西暦 %d 年は冬季オリンピックの開催年です。\n",year); //冬季オリンピックの判定

    if (year >=1992 && year % 4 != 0 && year % 2 != 0)
        printf("西暦 %d 年にオリンピックは開催されません。\n",year); //夏季、冬季どちらでもない場合の表示

    return 0;

}