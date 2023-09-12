// STRUCTURES IN C

#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char favlang[10]; // 9 characters+null character
};
struct student khaja, saad, faris; // global variable

int main()
{
    // initialising a structure
    struct student khaja, saad, faris; // local variable
    // comma between names is imp
    khaja.id = 1;
    saad.id = 2;
    faris.id = 3;

    khaja.marks = 99;
    saad.marks = 80;
    faris.marks = 70;

    khaja.fav_char = 'x';
    saad.fav_char = 'y';
    faris.fav_char = 'z';
    //**********************************************************

    // Use this method for strings only

    strcpy(khaja.favlang, "kannada");
    strcpy(saad.favlang, "Hindi");
    strcpy(faris.favlang, "english");
    //********************************************************
    printf("Faris whose id is :%d has got : %d marks and is fav char and fav language is -%c and -%s respectively ", faris.id, faris.marks, faris.fav_char, faris.favlang);

    return 0;
}