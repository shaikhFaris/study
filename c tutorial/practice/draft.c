#include <stdio.h>
int main()
{
    int base, exponent;
    int power = 1;
    printf("Enter the base\n");
    scanf("%d", &base);
    printf("Enter the exponent\n");
    scanf(" %d", &exponent);
    for (int i = 0; i < exponent; i++)
    {
        power = power * base;
        // the newest power is printed;
        printf("%d\n", power);
    }

    return 0;
}
