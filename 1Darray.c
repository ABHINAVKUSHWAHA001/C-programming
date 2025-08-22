#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i;
    printf("enter element in array is a :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element in array is b :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);

        c[i] = a[i] + b[i];
    }
    printf("element of array c are \n");
    for (i = 0; i < 5; i++)
    {
        printf("\t(*-*):-%d\n", c[i]);
        
    }
    return 0;
}