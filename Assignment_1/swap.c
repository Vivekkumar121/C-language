#include <stdio.h>
void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;

}
int main(){
    int a,b;
    printf("enter the number A and number B ");
    scanf("%d %d",&a,&b);
    printf("The values before swap : a= %d    b = %d\n",a,b);

    swap(&a,&b);
    printf("the values after swap :  a= %d   b = %d",a,b);
    return 0;
}