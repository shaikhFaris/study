#include <stdio.h>
int main()
{
    int marks[6];

    for (int i = 0; i <= 6; i++)
    {
        printf("Enter the value of %dth element of array\n", i);
        scanf("%d", &marks[i]);
    }
    printf("here is your array\n");
    for (int i = 0; i <= 6; i++)
    {
        printf("The %d element of array is %d\n", i, marks[i]);
    }

    return 0;
}
