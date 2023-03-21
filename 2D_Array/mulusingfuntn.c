#include <stdio.h>
void mul(int w,int x,int y,int z,int a[w][x],int b[y][z],int c[w][z]){
    int sum=0;
    int i,j,k;
     for(i=0;i<w;i++){
        for(j=0;j<z;j++){
            for( k=0;k<x;k++){
                sum=sum + a[i][k]*b[k][j];
             }
            c[i][j]=sum;
            sum=0;
        }
     }
}

int main(){
    printf("yha tk ok\n");
    int row,col,w,x,y,z;
   int i,j,k;
    printf("enter the rows and column size for A matrix ");
    scanf("%d %d",&w,&x);
     int a[w][x];
    for(i=0;i<w;i++){
        for(j=0;j<x;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix A is : \n");
    for(i=0;i<w;i++){
        for(j=0;j<x;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the rows and column size for B matrix ");
    scanf("%d %d",&y,&z);
    int b[y][z];
    for(i=0;i<y;i++){
        for(j=0;j<z;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("the matrix A is : \n");
    for(i=0;i<y;i++){
        for(j=0;j<z;j++){
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    if(x != y){
        printf("invalid");
        return 0;
    }
    int c[w][z];
    mul(w,x,y,z,a,b,c);
         
    for(int i=0;i<w;i++){
        for(int j=0;j<x;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
  

 return 0;
}
