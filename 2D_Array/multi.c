#include <stdio.h>
int main(){
     int w,x,y,z;
     int sum=0;
    printf("enter the rows and column size for A matrix ");
    scanf("%d %d",&w,&x);
    int A[w][x];
    printf("enter the rows and column size for A matrix ");
    scanf("%d %d",&y,&z);
    int B[y][z];
    int i,j,k;
    printf("enter the values for matrix A ");
    for(i=0;i<w;i++){
        for(j=0;j<x;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the values for matrix B ");
    for(i=0;i<y;i++){
        for(j=0;j<z;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("the matrix A is : \n");
    for(i=0;i<w;i++){
        for(j=0;j<x;j++){
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("the matrix B is : \n");
    for(i=0;i<y;i++){
        for(j=0;j<z;j++){
            printf(" %d ",B[i][j]);
        }if(j==z)
        printf("\n");
    }printf("\n\n\n");
    int C[w][z];
    if(x!=y)
     { return printf("invalid");
     }
    
    else
     for(i=0;i<w;i++){
        for(j=0;j<z;j++){
            for( k=0;k<w;k++){
                sum=sum + A[i][k]*B[k][j];
              //  printf("%d   1\n",sum);
            }
             C[i][j]=sum;
            sum=0;
        }
     }   
        for(i=0;i<w;i++){
            for(j=0;j<x;j++){
                  printf(" %d ",C[i][j]);
                     }
         if(j==x)
        printf("\n");
        }
        return 0;
}