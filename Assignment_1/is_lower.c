#include "stdio.h"
#include "ctype.h"
int is_digit(char y);
int main(){
    char x,y;
    printf("enter the character to check : ");
    scanf("%c",&x);
    if(x==toupper(x)){
        printf("the character is in upper case \n");
    }
    else printf("the character is in lower case\n");
    fflush(stdin);
    is_digit(x);
   // return 0;
}int is_digit(char y){
    char c;
    printf("enter any character to check ");
    scanf("%c",&y);
    if(isdigit(y)){
        printf("the number is a digit ");
    }
    else printf("the number is not a digit");
    return 0;
}