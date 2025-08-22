#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,n;
    printf("Enter the value of N(n<=10):-");
    scanf("%d",&n);
    printf("Enter the element of matrix A:-");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of matrix B:-");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]+=a[i][j]*b[i][j];
            }
        }
    }
                printf("the product of two matrix is:-");
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++){
                        printf("%d",c[i][j]);
                        }
                        printf("\n");
                    }
                return 0;

}