#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],r,c,i,j,k;
    printf("Enter the value of Row=");
    scanf("%d",&r);
    printf("Enter the value of column");
    scanf("%d",&c);
    printf("ENTER THE FIRST MATRIX ELEMENT \n");
    for(int i =0; i<r ;i++)
    {
        for(int j = 0 ; i<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter the second matrix element\n");
        for( int i = 0; i<r ; i++){
            for(int j =0; j<c; j++){
                c[i][j]=0;
                for( int k=0 ; k<c; k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0; j<c; j++){
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
        return 0;
}