#include <stdio.h>
 int reverse(char *b,char *c){
    int a=0,i;
    c=b;
    while(*(b)!='\0'){
            a++;
            b++;        
    }
//printf("%d\n",a);
 for(i=a;i>=0;--i){
        printf("%c",c[i]);
    }
   // return a;
 }
int main(){
    char a[30];
    char c[40];
    printf("enter string : ");
    scanf("%[^\n]",a);
    //printf("%d",reverse(a,c));
  reverse(a,c);
    return 0;
}