#include<stdio.h>
int main ()
{
    int a[5] ,i,n,c=0;
    printf("enter element of array ");
    for(i=0; i<5 ;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter element you want to search");
    scanf("%d",&n);
    for(i=0; i<5;i++)
    {
        if(a[i]==n)
        {
        printf("element found");
        c++ ;
        }
    }
    printf("the given element is %d time",c);
return 0;
    }
    