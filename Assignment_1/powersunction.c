#include <stdio.h>
int power();
int main(){
   power();
   return 0;

}int power(){
    int x,y,z;
    printf("enter the base number ");
    scanf("%d",&x);
    printf("enter the power ");
    scanf("%d",&y);
    
            z=1;
        while(y>0){
            z=z*x;
            --y;
        }
        printf("The power of x to y %d",z);
    //return z;
}
