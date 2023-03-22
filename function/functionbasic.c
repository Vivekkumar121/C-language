#include "stdio.h"
void display1();
void sub();
int mul();
int main()
{
    int x,y,m;
    printf("Enter number A ");
    scanf("%d",&x);
    printf("Enter number B ");
    scanf("%d",&y);
    display1(x,y);
    sub(x,y);
    m=mul( x, y);
    printf("value of multi. is %d",m);
    return 0;

}
void display1(int x, int y)
{
    int sum= x + y;
    printf("sum of x and y is %d \n",sum);
}void sub(int x, int y){
    int sub=x-y;
    printf("The x minus y is %d\n",sub);
}int mul(int x,int y){
    int cross=x*y;
    return cross;
}