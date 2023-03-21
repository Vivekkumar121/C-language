#include <stdio.h>
#include <conio.h>
int sub(int a[2][3],int b[2][3],int c[2][3]);
int sub(int a[2][3],int b[2][3],int c[2][3]){
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]-b[i][j];}}
}
int main(){
    int c[2][3];
    int a[2][3]={
        {5,9,5},
        {5,5,5}};
    int b[2][3]={
        {3,3,3},
        {1,1,1}};
    sub(a,b,c);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
        }
    return 0;
}