#include<stdio.h>
int main ()
{
    int i, n  ;
    printf("Enter number :- ");
    scanf("%d",&n);
  int sum =0;
    for(i=1;i<=n;i++)
    sum = sum +i;

    printf("sum is %d \n",sum);
    for(i=n; i>=1;i--)
    {
        printf("%d\n",i);

    }
    return 0;
}