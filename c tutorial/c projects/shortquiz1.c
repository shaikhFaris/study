// given 2 numbers a snd b add and substract them and assign them to a and b by using call by reference.

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int tiptop(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int a, b;
    printf("Enter your number a:");
    scanf("%d", &a);
    printf("Enter your number b:");
    scanf(" %d", &b);
    a = add(a, b);
    b = sub(a, b);
    printf("a=%d,b=%d\n", a, b);
    tiptop(&a, &b);
    printf("a=%d,b=%d", a, b);
    return 0;
}
