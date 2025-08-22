//Wap  to calculate langth of string without using pre_defined function

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0;
    printf("Enter the string");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
    }
