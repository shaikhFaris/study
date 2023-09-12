// the syntax of derefrencing pointer is *()
// see screenshots for more info
#include <stdio.h>

void changer(int *address)
{
    *(address) = 345;
    return;
}

int main()
{
    int a = 100, b = 200;
    printf("The initial value of a is:%d\n", a);
    changer(&a);
    printf("The final value of a is:%d\n", a);
    return 0;
}

// REFER SHORT QUIZ 1 FOR DETAILS
