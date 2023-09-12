#include <stdio.h>
char oddoreven(int p)
{

    if (p % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    int a, ans;
    printf("Enter Your number\n");
    scanf("%d", &a);
    ans = oddoreven(a);
    if (ans = 1)
    {
        printf(" The number is even\n");
    }
    else
    {
        printf(" The number is odd\n");
    }

    return 0;
}
