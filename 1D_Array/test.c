#include <stdio.h>
int main(){
    int c[10]={10,20,30,40,50};
   char a[100]="welcome";
    char b[100];
    int i=0;
    // printf("enter the characters of b \n");
    // scanf("%[^\n]",b);
    // for(int i=0;i<6;i++){
    // printf("the elements of a are : %c\n",a[i]);
    // }
    while(i != '\0'){
    printf("%c\n",a[i]);
    i++;
    }
    // while(i<6){
    // printf("%d  ",c[i]);
    // i++;
    // if(i==3){
    //     printf("\n");
    // }
    // }
    return 0;
}