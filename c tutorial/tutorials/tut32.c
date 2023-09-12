// Passing arrays as function arguments;

#include <stdio.h>

// This is the method of passing arrays directly.
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The %d element of array is %d\n", i, array[i]);
    }
    return 0;
}

// This is the method of passing array by passing base address to the function
int func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nThe %d element of array is %d", i, *(ptr + i));
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    func1(arr); // both of these are called calling
    func2(arr);
    return 0;
}
