#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int x;
    printf("Enter your number\n");
    scanf("%d", &x);
    printf("The factorial of %d is %d", x, factorial(x));

    return 0;
}
