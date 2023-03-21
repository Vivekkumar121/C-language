 #include <stdio.h>
 int main(){
     int num[8]={1,2,8,9,3,4,7,5};
     int a=3,i;
     for(i=0;i<=7;i++){
        if(num[i]==a){
            printf("the value found at index %d",i);
        break;
        }
     }
        if(i==8)
         printf("value not found");
        return 0;
//     printf("the value is %d\n",num[i]);
//     }
//     return 0;

}
