//WAp to calaclate sum and average of 3 number 
#include<stdio.h>
int main ()
{
    int a,b,c,sum ,avg;
    printf("ENTER ANY THREE NUMBER :\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("\n(*_*)  sum is %d",sum);
    printf("\n(*_*) avg is %d",avg);
  
    return 0;
}