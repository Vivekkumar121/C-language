#include <stdio.h>
int test1(int *,int *);
int main(){
    int i=2,j=5;
    int *p=&i;
    int *q=&j;
    test1(p,q);
    printf("q= %d",q);
}int test1(int *p,int *q){
    
    *p=10;
    p=q;
}
