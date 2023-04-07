#include "stdio.h"
int factorial(int );
int main(){
    int x;
    printf("Enter the number to get factorial = ");
    scanf("%d",&x);
    printf("%d",factorial(x));
    return 0;
}int factorial(int x){
    int fact;
    if(x==0){
        return 1;
    }
    else 
    fact=x*factorial(x-1);
    //printf("the factorial is %d",z);
    return fact;

}//120190102100013
//Abcd@123