#include<stdio.h>
#include <string.h>
int find_min(int [6]);
int main(){
    int a[]={10,20,30,4,50,60};
    find_min(a);
    return 0;
}
int find_min(int a[6]){
    int i=0;
    int min=a[0];
    for(i;i<6;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("the minimum value is %d ",min);
    return 0;
}