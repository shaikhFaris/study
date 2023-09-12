#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[50];
    int lisencenum;
    int km;
};
struct drivers a, b, c;

int main()
{
    int x, y;
    do
    {
        printf("#Enter any number except 101 to continue\n#Enter 101 to exit this program\n");
        scanf("%d", &y);
        if (y == 101)
        {
            break;
        }

        printf("Enter your serial number from 1 to 3\n");
        scanf("%d", &x);

        if (x == 1)
        {
            printf("driver1 please enter your name \n");
            gets(a.name);
            printf("driver1 please enter your liscense number\n");
            scanf("%d", &a.lisencenum);
            printf("driver1 please enter the number of km you have driven in your lifetime \n");
            scanf("%d", &a.km);

            printf("Here are the details of drive1r => %d\n");
            printf("\n Name:%s", a.name);
            printf("\n License number:%d", a.lisencenum);
            printf("\n Number of kms driven:%d", a.km);
        }
        else if (x == 2)
        {
            printf("driver2 please enter your name \n");
            gets(b.name);
            printf("driver2 please enter your liscense number\n");
            scanf("%d", &b.lisencenum);
            printf("driver2 please enter the number of km you have driven in your lifetime \n");
            scanf("%d", &b.km);

            printf("Here are the details of driver2 => %d\n");
            printf("\n Name:%s", b.name);
            printf("\n License number:%d", b.lisencenum);
            printf("\n Number of kms driven:%d", b.km);
        }
        else if (x == 3)
        {
            printf("driver3 please enter your name \n");
            gets(c.name);
            printf("driver3 please enter your liscense number\n");
            scanf("%d", &c.lisencenum);
            printf("driver3 please enter the number of km you have driven in your lifetime \n");
            scanf("%d", &c.km);

            printf("Here are the details of driver3 => %d\n");
            printf("\n Name:%s", c.name);
            printf("\n License number:%d", &c.lisencenum);
            printf("\n Number of kms driven:%d", c.km);
        }
        else
        {
            printf("ERROR\nplease enter the serial number from 1 to 3 only");
        }
    } while (y != 101);

    return 0;
}
