#include <stdio.h>

int main(void)
{
int date[9];
int i;
 
for(i = 0;i < 10;i++){
    printf("%d 番目の数値を入力して下さい。：",i); 
    scanf("%d",&date[i]);
}

for(i = 9;i >= 0;i--){
     printf("%d\n",date[i]);
}
printf("\n");
    
return 0;
}