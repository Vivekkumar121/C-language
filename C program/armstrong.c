#include "stdio.h"
int arm(int x,int y, int z);
int main(){
    int y,x,z,num;
    int sum=0;
    printf("enter armstong number ");
    scanf("%d",&x);
    num=x;
    arm(x,y,z);
    

}int arm(int x,int y, int z){
    int sum=0,num=x;
    while(x>0){
        y=x%10;
        z=y*y*y;
        sum=sum+z;
        x=x/10;
    }
    printf("%d\n",sum); 
    if (sum == num)
        printf("%d is armstrong number",num);
    else 
        printf("%d is not arm number",num);
    
    return 0; 
}