#include "stdio.h"
int main()
{   //to find factorial of any number
    int i, n,f=1;
    printf("print no.-");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    printf("step %d = %d\n",i, f);
    }
    // int i,j,k,x;
    // printf("take any no  ");
    // scanf("%d",&j);
    // for(i=0;i<=j;){
    //     k=i++;
    //     x=k+i;
    //     printf("%d ",x); }
        
    
    
        
    
    return 0;
}
