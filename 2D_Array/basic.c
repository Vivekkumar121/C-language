#include<stdio.h>
int main(){
    int num[2][2];
    int i,j;
    printf("enter the number od array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",&num[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",num[i][j]);
        }
if(j==2){
printf("\n");
    }
    
    
    }}