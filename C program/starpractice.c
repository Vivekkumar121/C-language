#include <stdio.h>
int main(){
    int x,y,z=0;
    printf("enter the no. of lines ");
    scanf("%d",&x);
    for(y=1;y<=x;++y){
        for(z=1;z<=x;z++){
        printf("* \n");}
    }return 0;
}