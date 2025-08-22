#include <stdio.h>
int main()
{
    int a[5], i;
    printf("enter the number of 1D array ");
    for (i = 0; i < 5; i++)
    {
        a[i] = i * i - 2 * i + 1;
    }
    printf("element of  array is ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}