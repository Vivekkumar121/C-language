#include "stdio.h"
int main()
{   
    float j,i=1,r,k;
    printf("Enter radius  - ");
    scanf("%f", &r);
    j=3.1428;
    i=3.142879*r*r;
    k=2*3.142879*r;
    printf("the area= %f\nand the circumference is =%f", i,k);
    return 0;
}