#include <stdio.h>
int prime(int x,int y);
int main(){
    int x,y;
    printf("enter the number to check ");
    scanf("%d",&x);
    y=x/2;
    prime(x,y);

}int prime(int x,int y){
    for(int i=2;i<=y;i++){
        if(x%i==0)
        return printf("this is not a prime");
    }
    return printf("this is prime number");

}