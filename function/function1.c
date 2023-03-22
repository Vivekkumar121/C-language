#include "stdio.h"
void display(int x,int y);
int main()

{
int x,y;
printf("value of x ");
scanf("%d", &x); 
printf("value of y ");
scanf("%d", &y); 
display(x,y);
return 0;

}void display(int x, int y){ 
    if(x>y) {
        printf("x is greater");
        
    }
    else if(x<y){printf("y is greater");}
    else { printf("x is equalto y ");
    }
}