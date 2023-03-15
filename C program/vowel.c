#include "stdio.h"
int main()
{
    // char z;
    // printf("Enter any alphabet : ");
    // scanf("%c",&z);
    // if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u'){printf("The number is a vowel");}
    // else {printf("the number is a consonent");}
    // return 0;
    char a[10];
    printf("enter the string ");
    scanf("%s",a);
    int j=0,flag=0;
    for(int i=0;i<10;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            j++;
            flag=1;
            
        }
        printf("%s\n",a[i]);
    }
    if(flag=1){
    printf("Not Found !\n");
    }
    //else printf("total vowels are %d",j);
    //printf("%s",a);

}