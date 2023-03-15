#include "stdio.h"
int main()
{
    int b,n,m;
    //for(b=1;b<=100;b++)
    printf("enter last no = ");
    scanf("%d", &m);
    for(b=1;b<=m;b++){
        n=(b*b+b)/2;
        }
        printf("sum is of first %d digits = %d",m,n);
        
    //printf("sum is %d", b+n);
    return 0;
}