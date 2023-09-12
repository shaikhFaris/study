#include<stdio.h>
int main()
{
    int a;

    printf("please enter your 4 number code\n");
    scanf("%d",&a);

    if (a==8136) /*to put equals to we need to put == (double equals sign)*/
    { 
       printf("ACCESS GRANTED\n\a");
       printf("                 \n");
       printf("THIS CODE WAS MADE BY DON FARIS");
    }
      else
      {
        printf("ACCESS DENIED\n");
      }
      
    scanf(" %d",&a);
    
    return 0;
}
