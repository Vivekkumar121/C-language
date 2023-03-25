#include <stdio.h>
int main(){
    int a[6]={10,20,30,40,50,60};
    //int *p[6]={&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]};
    int (*p)[6]=&a;
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum + *(*p+i);
    }   
    return  printf("sum is %d",sum);

}