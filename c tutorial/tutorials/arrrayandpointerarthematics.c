#include <stdio.h>
int main()
{
    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d", ptra - 2); // here 2 sizes of int is substracted from original adress .
    // // printf("%lu", sizeof(int));
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", arr[0]);
    printf("The address of first elemnt of the array is %d\n", &arr[0]);
    printf("The address of first elemnt of the array is %d\n", arr);
    // Here both the values are same check the note in notebook for ref

    // betwen 2 elemnts in integer array there is a space of 4 because the sizeof int is 4;
    printf("The address of second elemnt of the array is %d\n", &arr[1]);
    printf("The address of second elemnt of the array is %d\n", arr + 1);

    printf("The value address of first elemnt of the array is %d\n", *(&arr[0]));
    printf("The value address of first elemnt of the array is %d\n", *(arr));
    printf("The value address of second elemnt of the array is %d\n", *(&arr[1]));
    printf("The value address of second elemnt of the array is %d\n", *(arr + 1));
    // We can print the value by address  using *()

    return 0;
}
