#include <stdio.h>
int main()/*FOR THIS WE ONLY USE "IF STATEMENT ONLY"*/
{
      int a,b,c,d;
      char x;
 printf("enter your desired number\n");
 scanf(" %d",&a);

 printf("do u want to add anythimg to this number? (y/n)\n");
 scanf(" %c",&x);
 if ((x=='y'))
 {printf("type the number u want to add to your number?\n");
  scanf(" %d",&b);
  printf("%d+%d=%d\n",a,b,a+b);
 } 

 printf("do u want to substract anythimg from this number? (y/n)\n");
 scanf(" %c",&x);
 if ((x=='y'))
 {printf("type the number u want to substract from your number?\n");
  scanf(" %d",&c);
  printf("%d-%d=%d\n",a+b,c,a+b-c);
 }

  printf("do u want to multiply anythimg to this number? (y/n)\n");
 scanf(" %c",&x);
 if ((x=='y'))
 {printf("type the number u want to multiply to your number?\n");
  scanf(" %d",&d);
  printf("%d*%d=%d\n",a+b-c,d,a+b-c*d);
 }
       return 0;
}
