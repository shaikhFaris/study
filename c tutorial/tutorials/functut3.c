#include <stdio.h>
int arofrectangle(int l, int b) // This is called declaring of function
{
    int area;
    area = l * b;
    return area;
}

int main()
{
    int l, b;
    printf("enter the length of your rectangle\n");
    scanf("%d", &l);
    printf("Enter the breadth of your rectangle\n ");
    scanf(" %d", &b);
    int area = arofrectangle(l, b);
    printf("The area of reectangle is %d", area);
    return 0;
}
