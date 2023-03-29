#include<stdio.h>
int nPr(int x,int y);
int main(){
    int x,y,z;
    printf("enter the total outcome (n) ");
    scanf("%d",&x);
    printf("enter the favourable outcome (r) ");
    scanf("%d",&y);
    
    nPr(x,y);
}
int nPr(int x,int y){
    int b=x-y;
    int m=1;
    for(x;x>=2;--x){
        m=m*x;
    }
    int c=1;
    for(b;b>=2;--b){
        c=c*b;
    }
       int p=m/c;
    return printf("the value of nCr %d",p);
}
