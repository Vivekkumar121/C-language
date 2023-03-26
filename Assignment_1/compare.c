#include <stdio.h>
int m=0,n=0;
int compare(char *a,char *b){
    
    while(*(a)!='\0'){
        m++;
        a++;
    }
    while(*(b)!='\0'){
        n++;
        b++;
    }

    
}
int main(){
    char a[20];
    char b[20];
    printf("Enter string 1 : ");
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Enter string 2 : ");
    scanf("%[^\n]",b);
    compare(a,b);
    if(n>m){
        printf("1");
    }else if(n<m){
        printf("-1");
    }
    else if(m==n){
        printf("0");
    }
    return 0;
}