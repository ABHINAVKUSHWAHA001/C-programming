#include<stdio.h>
int main ()
{
    int abhi[2][3],sum=0;
    printf("enter element of 2D array");
    for(int i=0;i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&abhi[i][j]);

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+abhi[i][j];
        }
    }
    printf("element are sum of %d",sum);
    return 0;
}