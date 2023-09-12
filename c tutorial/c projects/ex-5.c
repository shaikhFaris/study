// array reversal programm
#include <stdio.h>
int arrayrev(int *ptr)
{
    // printf("%d\n", *ptr);
    // printf("%d\n", *(ptr + 1));
    *ptr = *(ptr + 4);
    *(ptr + 1) = *(ptr + 3);
    *(ptr + 4) = *ptr;
    *(ptr + 3) = *(ptr + 1);
}
int main()
{
    int arr[] = {23, 32, 54, 64, 676};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The %d element of array is:%d\n", i, arr[i]);
    // }
    arrayrev(arr);
    printf("The new array is {%d,%d,%d,%d,%d}", arr[0], arr[1], arr[2], arr[3], arr[4]);

    return 0;
}
