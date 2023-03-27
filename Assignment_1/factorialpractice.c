/*#include "stdio.h"
int main(){
    int x,i,z=1;
    printf("enter the factorial number ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        z=z*i;
    } 
        printf("%d",z);
        return 0;       
} */
#include "stdio.h"
int fact(int x,int z);
int main(){
    int x,z;
    printf("enter the factorial number ");
    scanf("%d",&x);
    // for(x;x>=2;--x){
    //     z=z*x;
    //     printf("%d\n",z);
    // } 
    printf("the factorial is %d",fact(x,z));
        return 0;      
}int fact(int x,int z){
    z=1;
    for(x;x>=2;--x){
        z=z*x;

    }return z;
}