#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[10];
};
int main()
{
    union student s1;
    s1.id = 1;
    s1.fav_char = 'k';
    strcpy(s1.name, "khaja");
    s1.marks = 100;

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}
