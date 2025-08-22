#include<stdio.h>
int main(){
    int a[5] ,i ;
    printf("Enter element in array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the element of array are:");
    for(int i =0; i<5;i++)

    {
        printf("%d",a[i]);

    }
    return 0;
}