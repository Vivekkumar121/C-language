#include <stdio.h>
char * concate(char *, char *);
int main(){
    char a[40];
    char b[40];
    printf("enter the string : ");
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("enter the string : ");
    scanf("%[^\n]",b);
    printf("%s",concate(a,b));
    return 0;

}char * concate(char *a,char *b){
   char *temp=a;
   while(*a!='\0'){
    a++;
   }
   while(*b!='\0'){
    *a=*b;
    a++;
    b++;
   }
   *a='\0';
   return temp;
}