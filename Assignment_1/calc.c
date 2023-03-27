#include <stdio.h>
int calc(int x,int y, char ch);
int main(){
    int x,y;
    char ch;
    printf("enter the value of num1= ");
    scanf("%d",&x);
    fflush(stdin);
    printf("enter the operator= ");
    scanf("%c",&ch);
    
    printf("enter the value of num2= ");
    scanf("%d",&y);
    calc(x,y,ch);    
    return 0;
    
}int calc(int x,int y, char ch){
    //char ch;
    //int ch;
    switch(ch){
        case '+': printf("the sum of num1 & num2= %d",x+y);
        break;
        case '-' : printf("the sub is= %d",x-y);
        break;
        case '*' : printf("the mutiplication is= %d",x*y);
        break;
        case '/' : printf("the quotient is= %d",x/y);
        break;
    }return 0;
}