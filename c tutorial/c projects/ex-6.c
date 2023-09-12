#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            x = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            x = 0;
            continue;
        }
        if (x == 0)
        {
            str[y] = str[i];
            y++;
            continue;
        }
    }
    str[y] = '\0';
}
int main()
{
    char str[] = "<h1>   This is a string</h1>";
    parser(str);
    printf("This is your string --%s--", str);
    return 0;
}
