#include "stdio.h"
int main()
{
    int a,b;
    char c;
    
    printf("enter any number A ");
    scanf("%d",&a);
    printf("choose operator \n");
    scanf("%c",&c);
    printf("enter any number B ");
    scanf("%d",&b);
    fflush;


    switch (c) {
        case '+': printf("the sum is A,B=%d",a+b);
        break;
        case '-': printf("the sub is A,B=%d",a-b);
        break;
        case '*': printf("the multiplication is A*B=%d",a*b);
        break;
        case '/': printf("the quotient is A,B=%d",a/b);
        break;
        case '%': printf("the remainder is A,B=%d",a%b);
        break;

        default : printf("wrong user choice");
    }
    return 0;

}