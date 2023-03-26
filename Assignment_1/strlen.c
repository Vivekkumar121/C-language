#include <stdio.h>
int stlen(char *b){
    int x=0;
    while(*(b)!='\0'){
    b++;
    x++;
   }

    return x;
}
int main(){
    char a[10];
        printf("enter string ");
        scanf("%[^\n]",a);
    // int y=stlen(a);
    printf("the length of string is %d",stlen(a));
    return 0;
}
