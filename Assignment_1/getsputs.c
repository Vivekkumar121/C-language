// #include "stdio.h"
// int main(){

//     char s[100];
//     puts("Enter your name");
//     gets(s);
//     puts(s);
//     return 0;

// }
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter your name ");
    scanf("%[^\n]s",&s);
    printf("%s",s);
    return 0;
}