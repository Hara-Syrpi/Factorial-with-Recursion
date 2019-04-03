#include <stdio.h>

long factorial(int n);

int main(void)
{
    int num;
    long res;

    for(;;)
    { /* forever */

        printf("Give a non-negative integer (or negative to exit): ");
        scanf("%d",&num);

        if(num < 0) break;

        /*factorial calculation*/
        res = factorial(num);
        printf("The factorial is: %ld\n\n",res);
    }

    return 0;
}

long factorial(int n)
{
    /* return n == 0 ? 1 : n * factorial(n - 1) */
    if(n == 0) return 1;

    return n * factorial(n - 1);
}
