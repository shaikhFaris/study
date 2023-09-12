// This is a program to find if the number is a prime number
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter your number : ");
    scanf("%d", &a);

    for (int i = 2; i < a; i++)
    {
        if (a % i != 0)
        {
            b = 1; // It is prime
            break;
        }
        else
        {
            b = 2;
            break;
        }
    }
    if (b == 1)
    {
        printf("The entered number is prime number");
    }

    else if (b == 2)
    {
        printf("The entered number is not a prime number");
    }

    return 0;
}
