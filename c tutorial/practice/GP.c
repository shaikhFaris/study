// PLEASE REVISE THIS ONCE MORE HERE I LEARNED VERY IMPORTANT CONCEPTS OF LOOPS AND REUSIBLITY OF FUNCTIONS

#include <stdio.h>

int gp(int n, int r) // This is to find r^n
{
    int power = 1;

    // if u put int i=0 and i is smaller than or equal to 5 then number will get multiplied one more time then what u expected i.e 0 1 2 3 4 5,here 0 is laso counted.

    for (int i = 1; i <= n - 1; i++)
    {
        power = power * r;
    }
    return power;
}

int main()
{
    int p, q, r, nthterm, x, w, y;
    int power = 1;
    printf("Enter the first term of your GP serires:");
    scanf("%d", &p);
    printf("Enter the number of terms in your GP serires:");
    scanf(" %d", &q);
    printf("Enter the common difference of your GP series:");
    scanf(" %d", &r);

    nthterm = gp(q, r);
    x = p * nthterm;

    printf("This is your last term:%d\n", x);
    printf("Here is your series:\n");
    for (int i = 1; i <= q; i++)
    {
        w = gp(i, r);
        // in this loop only n\i value is changing but first term and common ratio is same;
        y = p * w;
        printf("%d,", y);
    }

    return 0;
}
