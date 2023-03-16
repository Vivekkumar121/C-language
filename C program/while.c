#include"stdio.h"
int main()
{
    int i,j;
       printf("Enter i value=");
        scanf("%i",&i);
        printf("Enter j value =");
        scanf("%i",&j);
    while(j<4){
        printf("value of j = %d\n",j);
        j++;}
        do{printf("value of i is %d\n",i);
        i++;}
        while (i<4);
        return 0;

}