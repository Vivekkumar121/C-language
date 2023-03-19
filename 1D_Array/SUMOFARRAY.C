#include<stdio.h>
int sum(int []);
int main(){
    int a[]={10,20,30,40,50,60};
    printf("the sum of the array is %d ",sum(a));
    return 0;
}
int sum(int a[]){
    int sum = 0;
    for(int i=0;i<6;i++){
        sum=sum+a[i];
    }
    return sum;
}