#include <stdio.h>
void hcf(int x)
{
    int p;
    int j = 0;
    int arr[p];
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            j = j + 1;
            arr[j] = i;
        }
    }
    printf("The factors are ");
}

int main()
{
    int a;
    printf("Enter the number whose HCF you want :");
    scanf("%d", &a);
    hcf(a);
    return 0;
}
