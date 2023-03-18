#include<stdio.h>
int main(){
    int x,count=1;
    printf("enter the number to get factors ");
    scanf("%d",&x);
   int b=x/2;
    for(int i=1;i<=b;i++){
        if(x%i==0){
            count++;
            printf(" %d",i);
        }
    }
    printf(" %d",x);printf("\nthe total number of factors are %d",count);
    return 0;
}