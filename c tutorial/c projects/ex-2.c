#include <stdio.h>

int kmtomil(int k)
{
    return k * 0.6;
}
double inctofoot(int p)
{
    return p * 0.0833;
}
double poundtokg(int q)
{
    return q * 0.454;
}
double inchtometre(int r)
{
    return r / 39.37;
}
int main()
{
    int j, u;
    do
    {
        printf("..............................\n");
        printf("THIS IS A Programme FOR CONVERTING UNITS\n");
        printf("..............................\n");
        printf("Enter 404 to exit this programme or to continue press any other numbers and press enter. \n");
        printf("WARNING:DO NOT TYPE ANY ALPHABETS OR ELSE THIS PROGRAMME WILL RUN IN INFINITE LOOP AND DESTROY YOUR PC \n");
        scanf("%d", &j);
        // in loop we put break statements before the rpogramme becuz even if u put the break after the programme will still run till before that break statement .
        if (j == 404)
        {
            break;
        }

        int x, y, ktomil, z, w, v;
        double inctfoo, potkg, inctmet;

        printf("Here are your instructions:\n");
        printf("        \n");
        printf("Press 1 to convert km into miles\n");
        printf("Press 2 to convert inches into foot\n");
        printf("Press 3 to convert pounds into kg\n");
        printf("Press 4 to convert inches into metre\n");
        scanf(" %d", &x);
        // to use if else if ladder check the syntax properly
        if (x == 1)
        {
            printf("Enter the which u want to convert to km into miles\n");
            scanf("%d", &y);
            ktomil = kmtomil(y);
            printf("%d miles", ktomil);
        }
        else if (x == 2)
        {
            printf("Enter the number u want to convert from inches to foot\n");
            scanf(" %d", &z);
            inctfoo = inctofoot(z);
            printf("%lf foots\n", inctfoo);
        }
        else if (x == 3)
        {
            printf("Enter the number u want to convert from pound to kg\n");
            scanf(" %d", &w);
            potkg = poundtokg(w); // this mean that we get value of potkg after putting value of w in poundtokg function
            printf("%lf kgs", potkg);
        }
        else if (x == 4)
        {
            printf("Enter the number u want to convert from inches to metre\n");
            scanf(" %d", &v);
            inctfoo = inctofoot(v);
            printf("%lf metres\n", inctfoo);
        }
        else
        {
            printf("YOu are a FOOL u cant even read the instructions,so u dont deserve to use my programme!\n");
        }
        printf("   \n");
        printf("   \n");

    } while (j != 404);
    // u can even use goto end or start and put return 0

    return 0;
}
