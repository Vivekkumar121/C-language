#include <stdio.h>
int main(){
    int A[2][2]={
        {1,2},
        {3,4}
    };
    int B[2][2]={
        {1,2},
        {3,4}
    };
    int i,j;
    int sum[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
         sum[i][j]=A[i][j]+B[i][j];
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",sum[i][j]);
        }if(j==2)
        printf("\n");
    }
    //return 0;
}