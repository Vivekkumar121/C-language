#include <stdio.h>
int main(){
    int A[2][3];
    int i,j;
    printf("enter the elements os matrix A ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
             scanf("%d",&A[i][j]);
        }
    }
    printf("the formed matrix is \n");
   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
         printf(" %d ",A[i][j]);
    }if(j==3)
    printf("\n");
   }return 0;
   
}