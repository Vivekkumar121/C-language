#include "stdio.h"
int main()
{
    int x,y;
    float z=1.0;
    printf("Enter base=");
    scanf("%d",&x);
    printf("Enter power= ");
    scanf("%d",&y);
    while(y != 0){
        z*=x;
        --y;
    }printf("answer is = %.2f", z);
    return 0;

}