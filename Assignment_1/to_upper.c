#include<stdio.h>
#include<ctype.h>
void to_upper(char x,char y);
int main(){
    char x,y;
    char s[]="vivekkumar\n";
    printf("enter the character to upper case : ");
    scanf("%c",&x);
    // printf("enter the character to upper case : ");
    // scanf("%s",s);
    // y=s[100];
    int j=0;
     while(s[j]){
        y=s[j];
        printf("%c",toupper(y));
        j++;
        //putchar(toupper(y));
    }
    to_upper(x,y);
    
   

}void to_upper(char x,char y){
    
    printf("the letter is = %c",tolower(x));
    
    
    }