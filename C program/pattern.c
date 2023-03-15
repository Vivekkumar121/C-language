#include "stdio.h"
#include "math.h"
int main()
{
    int b,n,m;
    printf("enter the value --");
    scanf("%d",&b);
    /*n=b*b;
    printf("%d",n);*/
    for(n=1;n<=b;n++){
        for(m=1;m<=b;m++){
            if(n<m)printf("1 ");
            else printf("* ");
        } printf("\n"); 
    }
    return 0;
}