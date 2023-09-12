#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];
    char str2[30];
    char str3[] = " is a freind of ";
    char str4[50];
    printf("Enter your name\n");
    gets(str1);
    printf("Enter your freind's name\n");
    gets(str2);
    strcpy(str4, strcat(strcat(str1, str3), str2));
    puts(str4);

    return 0;
}
