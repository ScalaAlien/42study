#include <stdio.h>

int main(void)
{
    char str1[10],str2[10],name[20];

    printf("姓を入力して下さい。：");
    scanf("%s",str1);

    printf("名を入力して下さい。：");
    scanf("%s",str2);

    sprintf(name,"%s%s\n",str1,str2);
    printf("%s",name);

    return 0;

}