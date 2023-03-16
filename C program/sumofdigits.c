/*#include "stdio.h"
int main(){
    int x;
    int sum=0;
    printf("enter the number ");
    scanf("%d",&x);
    while(x>0){
    int m=x%10;
    sum=sum+m;
    x=x/10;
    }

    printf("the number %d",sum);
    
    return 0;

}
*/
#include "stdio.h"
int sumofDigits(int x,int n);
int main(){
    int n,x;
    printf("bhai pehla number bolo ");
    scanf("%d",&n);
    printf("the sum is %d",sumofDigits(x,n));
    
    
    return 0;

}int sumofDigits(int x,int n){
    int sum=0;
    while(n>0){
    x=n%10;
    sum=sum+x;
    n=n/10;
    }
return sum;
}