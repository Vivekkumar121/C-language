#include <stdio.h>
int is_prime(int x,int y);
int main(){
    int x;
    printf("enter the number to check : ");
    scanf("%d",&x);
    int y=x/2;
    is_prime(x,y);
    
}int is_prime(int x,int y){
    //printf("%d",y);
    for(int i=2;i<=y;i++){
        if(x%i==0)
        return printf("the number is not a prime number");

    }
    return printf("the number is prime number");
}