#include <stdio.h>
int main(){
    int x[6]={10,20,30,40,50,60};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum =sum + x[i];
    }
    printf("the sum of elents of array x is = %d ",sum);
    return 0;
}