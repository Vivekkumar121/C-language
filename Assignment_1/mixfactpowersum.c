#include "stdio.h"
int fact(int x,int z);
int power(int x,int y,int z);
int sum(int x,int y,int z);
int main(){
    int x,z,y;
    printf("1.for factorial\n2.for power\n3.for sum of digits\n");
    scanf("%d",&x);
    switch(x){
        case 1 : fact(x,z);
        break;
        case 2 : power(x,y,z);
        break;
        case 3 : sum(x,y,z);
        break;
        default : printf("INVALID CHOICE");
        break;
    }
         
}int fact(int x,int z){
    printf("enter the factorial number ");
    scanf("%d",&x);
    z=1;
    for(x;x>=2;--x){
        z=z*x;

    }return printf("the value of factorial is %d",z);
}int power(int x,int y,int z){
    printf("enter the base number ");
    scanf("%d",&x);
    printf("enter the power number ");
    scanf("%d",&y);
    
            z=1;
        while(y>0){
            z=z*x;
            --y;
        }
    return printf("the result of x to y is %d",z);
}
int sum(int x,int y,int z){
printf("enter the number to get sum of digits ");
scanf("%d",&x);
 int m=0;z=0;
    while(x>0){
        y=x%10;
        z+=y;
        x=x/10;
        m=m+1;
             }
             printf("the sum of digits are : %d\n",z);
             printf("the number of digits are : %d\n",m);
    return 0;
}
