#include "stdio.h"
int main(){
    int x,y;
    printf("enter the decimal number to convert into octal ");
    scanf("%d",&x);
    printf("enter the octal number to convert into decimal ");
    scanf("%o",&y);
    
    printf("the decimal number in octal is= %o",x);
    printf("the octal number in decimal is= %d",y);

    return 0;
}