#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a; // here ptr is pointer which stores address of a.
    printf("%d\n", ptr);
    printf("%d\n", &a);
    // Here *ptr is dereferencing;
    printf("%d\n", *ptr);
    printf("%d\n", a);

    return 0;
}
