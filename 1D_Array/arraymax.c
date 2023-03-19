#include "stdio.h"
int main(){
    int x[]={10,20,30,60,40,50,[10]=100};
    int max=x[0];
    //int i;
    for(int i=0;i<11;i++){
        if(max<x[i])
            {max=x[i];
            }
    }
            printf("%d",max);
            return 0;

}