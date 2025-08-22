#include <stdio.h>
int main ()
{
    int a[5],i;
    printf("enter number of 1D array ");
    scanf("%d",&a[i]);
    for (i=0;i<5;i++)
    {
        a[i]= i*i-2*i+1;

    }
    printf("element of array ");
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);

    }
    return 0;
}