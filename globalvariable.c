#include <stdio.h>

int count; /* グローバル変数 */

int countfunc(void); /* 自作の関数 */

int main (void)
{
    countfunc();
    countfunc();
    countfunc();

    return 0;
}
int countfunc(void)
{
    count ++;
    printf("%d\n",count);
    return count;
}
