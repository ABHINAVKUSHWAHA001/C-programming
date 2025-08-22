#include<stdio.h>
int main()
{
    int a[20],i;
    printf("enter element in array");
    for(i=0 ; i<20 ; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("the element of array are \n");
    for(i=0 ; i<20; i++)
    {
    printf("%d  ",a[i]);
    }
    return 0;
}