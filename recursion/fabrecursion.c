#include "stdio.h"
int fabonacci();
int main(){
    int x,n;
    printf("enter the number ");
    scanf("%d",&x);
    int y=0,z=1;
    int m=y+z;
    printf("%d %d ",y,z);
    fabonacci(x,y,z);
    
}int fabonacci(int x,int y,int z){
    int m,n;
        // int y=0;
        // int z=1;
        m=y+z;
        for(n=3;n<=x;++n){
        printf("%d ",m);
        y=z;
        z=m;
        m=y+z;
        }
        return m;
        

    }

