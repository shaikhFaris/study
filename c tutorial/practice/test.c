#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter your name\n");
    gets(str);
    printf("This is your name: %s", str);

    return 0;
}
