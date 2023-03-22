#include<stdio.h>
int main(){
    int i,j,k;
    int sum=0;
    int A[2][3];
    int B[3][2];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("the matrix A is = \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }if(j==3)
        printf("\n");
    }
    printf("the matrix B is = \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",B[i][j]);
        }if(j==2)
        printf("\n");
    }
    int mul[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum+=A[i][k]*B[k][j];
            }mul[i][j]=sum;
            sum=0;
        }
    }
    printf("the formed multiplication matrix is \n");
    for(j=0;j<2;j++){
        for(i=0;i<2;i++){
            printf(" %d ",mul[i][j]);
        }if(i==2)
        printf("\n");
    }
}