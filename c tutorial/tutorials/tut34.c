// STRINGS IN C ;

#include <stdio.h>
int main()
{
    // LEARN THE DIFF BETWEEN STRINGS AND CHAR ARRAYS

    //  char string[] = {'f', 'a', 'r', 'i', 's', '\0'};
    // char string[6] = "faris";
    // // here there are 6 elements in this string including /0;
    // printf("%s", string);
    char str[100];
    printf("Enter your string\n");
    gets(str);
    printf("This is using puts:");
    puts(str);
    printf("This is using printf:%s", str);

    return 0;
}
