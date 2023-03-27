#include <stdio.h>
int arm(int x,int y,int z);
int main(){
    int x,y,z,num;
    int sum=0;
    printf("enter the number ");
    scanf("%d",&x);
    num=x;
    arm(x,y,z);
    
   //printf("     %d   \n",x);
       
}int arm(int x,int y,int z){
    int num=x;
   printf("%d\n",num);

    int sum=0;
    while(x>0){
        y=x%10;
        z=y*y*y;
        sum=sum+z;
        x=x/10;
       // printf("%d\n",sum);
    }
  // printf("%d\n",num);
   //printf("%d\n",sum);
    if (sum==num)
        printf("this is armstrong number");
    else 
        printf("this is not");
    return 0;
}