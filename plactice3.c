#include <stdio.h>

int main(void)
{
    int juice_price = 198;
    int milk_price = 138;
    double tax = 1.05;
    printf("お釣りは %d 円です。\n",(int)(1000 - (juice_price + milk_price * 2) * tax )); 
    
    return 0;
}