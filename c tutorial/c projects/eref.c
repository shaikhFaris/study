#include <stdio.h>
int main()
{
    int i, n, x;
    printf("Enter the number whose table you want\n");
    scanf("%d", &x);
    printf("And enter the till which this  number must be multiply \n");
    scanf(" %d", &n);
    printf("Here is your table\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d*%d=%d\n", x, i, i * x);
    }
    scanf(" %d", x);

    return 0;
}
