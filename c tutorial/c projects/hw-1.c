#include<stdio.h>
int main()
{  
    char s , m;
    printf("           \n");
    printf("DEAR STUDENTS PLEASE TELL US WHICH SUBJECTS YOU HAVE PASSED\n  \n");

    printf("did u pass in science?(y/n)\n");
    scanf("%c",&s);

    printf("did u pass in maths?(y/n)\n");
    scanf(" %c",&m);

    printf("here is the report:\n      \n");

    if ((s=='y')&&(m=='n'))
    { printf("you have passed in sceince only .\n YOU GET 100 RUPEES \n");
    }
    else if ((s=='n')&&(m=='y'))  /*to put alphabets in char variables u 
must remember that u can put only put one lettered word and you must leave a space before %c 
in scanf function*/ 
    {
        printf("you have passed in maths only .\n YOU GET 100 RUPEES \n            \n");
    }
    else if ((s=='y')&&(m=='y'))
    {
        printf("you have passed in both maths and sceince\n YOU GET 200 RUPEES\n");
    }
         else
        {
        printf("YOU ARE A FAILURE\n");
       }
         
         printf("THANK YOU");


          scanf(" %c",&s);
  
    
                    return 0;
}
