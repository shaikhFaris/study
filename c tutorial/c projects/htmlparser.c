#include <stdio.h>
#include <string.h>

// Inoder to call a func in another func the called func must be above the func it is called in;
void spaceremover(char *str1)
{
    int p;
    int q = 0;
    char str2[100];

    printf("\nThis is the value of str2 :\n");
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != ' ')
        {
            str2[q] = str1[i];
            q++;
        }
    }
    str2[q] = '\0';
    puts(str2);
    printf("  ");
}

void tags(char *str) // nothing is returned from void functions;
{
    int x;
    int y = 0;
    char str1[50];

    for (int i = 0; i < strlen(str); i++)
    {
        // printf("%d ", strlen(str));
        // "<tag>   Hello, my name is Faris        </tag>   "

        if (str[i] == '>')
        {
            x = 1;
            continue;
        }
        else if (str[i] == '<')
        {
            x = 2;
            continue;
        }
        if (x == 1)
        {
            str1[y] = str[i];
            y++;
        }
    }
    str1[y] = '\0';
    // puts(str1);
    printf("\nThis is value of str1 :\n");
    printf("#%s#\n", str1);
    spaceremover(str1);
}

int main()
{
    char str1[50];
    char str2[50];
    char str[] = "<tag>   Hello, my name is Faris      </tag>  ";
    tags(str);
    return 0;
}
