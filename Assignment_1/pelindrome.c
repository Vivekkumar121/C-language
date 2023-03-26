#include <stdio.h>
int main(){
    int z=0,i=0;
    // char a[20];
    // char b[20];
    // char *p;
    int flag=0;
    // p=a;
    // scanf("%[^\n]",a);
    // while(*(p)!='\0'){
    //     z++;
    //     p++;
    // }
    // int l=z;
    // // printf("%c\n",a[z-1]);
    // while(i!=l){
    //    b[i]=a[z-1];
    //    i++;
    //    --z;
    // }printf("%s\n",b);
    char a[20]={"vivek"};
    char b[20]={"aviakk"};
    
   for(i=0;i<5;i++){
     if(a[i]==b[i]){
         flag=1;
         i++;
        }
   }

   if(flag==1){
    printf("true");
   }
   else {
    printf("no");
   }
}