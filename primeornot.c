//wap to find whether the given number is prime or not 
#include<stdio.h>
int main ()
{
    int n, i, x=0;
    printf("enter a possitive integers ");
    scanf("%d", &n);
    if(n==0||n==1)
    x=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
        }
        if(x==0)
    printf("%d is a prime number ",n);
    else
    printf("%d is not a prime number ");
    return 0;
}