#include <stdio.h>
#include <stdlib.h>
//#define NULL
int main(){ 
                                          //Memory allocation with malloc
    int *p,*table;
    int size;
    printf("Enter the size of table \n");
    scanf("%d",&size);
    if((table=(int*)malloc(size*sizeof(int)))==NULL)
    {
        printf("There is no enought space ");
        exit(1);
    }
    printf("address of first byte is %u ",table);
    for(p=table;p<=table+size;p++){
        scanf("%d",p);
    }
    for(p=table+size-1;p>=table;p--){
        printf("%d is stored at location %u\n",*p,p);
    }

    return 0;
}