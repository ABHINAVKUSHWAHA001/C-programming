// WAP ti check wheather the enter the string is palindrome_or_not

#include<stdio.h>
#include<string.h>
int main(){
    char a[10], b[20];
    int y ;
    printf("enter the any string");
    gets(a);
    strcpy(b,a);
    strrev(a);
    y=strcmp(a,b);
    if(y==0)
    printf("string is palindrome");
    else
    printf("string is not palindrome ");
    return 00;
}