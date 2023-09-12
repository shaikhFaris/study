#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of lines in this star pattern\n");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Error\n");
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
