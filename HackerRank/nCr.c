#include<stdio.h>
//int various(int x,int y,int z);
//int various(int x,int y,int z);
int main(){
    int x,y,z;
   // various(x,y,z);
    //return 0;
    
//}int various(int x,int y,int z){
    printf("enter the total outcome (n) ");
    scanf("%d",&x);
    printf("enter the favourable outcome (r) ");
    scanf("%d",&y);
    int b=x-y;
    int m=1;
    for(x;x>=2;--x){
        m=m*x;
    }
    //printf("%d\n",m);
    int a=1;
    for(y;y>=2;--y){
        a=a*y;
    }
    
    //printf("%d\n",a);
    
    //printf("%d\n",b);
    int c=1;
    for(b;b>=2;--b){
        c=c*b;
    }
    //printf("%d\n",c);

    int p=m/(a*c);
    return printf("the value of nCr %d",p);
}