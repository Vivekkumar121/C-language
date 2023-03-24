#include <stdio.h>
int *add(int *,int *);
int main(){
    int a=10;
    int b=20;
    printf("%d",add(&a,&b));
    
    //printf("%d\n",&a);
    return 0;
}int *add(int *c,int *d){
    printf("%d\n",*c);
    //return *c+*d;
}