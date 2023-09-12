#include <stdio.h>
int main()
{
    int n, b, c;
    printf("Enter the number of terms in your AP sequence of common difference of 2\n");
    scanf("%d", &n);

    printf("Here is your series:");
    // this was solved by using equations in rough book;
    for (int i = 1; i <= n; i++)
    {
        c = 1 + (i - 1) * 2;
        printf("%d,", c);
    }

    return 0;
}
