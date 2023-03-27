#include "stdio.h"
int main(){
    int x,y;
    printf("enter the decimal number to convert into octal ");
    scanf("%o",&x);
    printf("enter the octal number to convert into decimal ");
    scanf("%x",&y);
    
    printf("the decimal number in hexadecimal is= %x\n",x);
    printf("the hexadecimal number in decimal is= %d",y);

    return 0;
}