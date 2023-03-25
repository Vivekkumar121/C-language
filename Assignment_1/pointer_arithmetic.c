#include <stdio.h>
int main(){
    int a=10,b=20;
    int *p=&a;
    int *q=&b;
    //increment of pointer
    printf("first = %d\n",&a);
    printf("first = %d\n",p);
    printf("first = %d\n",++p);
    printf("second = %d\n",p--);
    //decrement of pointer 
    printf("third = %d\n",*(p++)+4);
    //addition of integer to a pointer
    printf("fourth = %d\n",*p+10);
    //addition of two pointers
    int y=p-q;
    printf("fifth = %d\n",y);

    //sunbtraction of integer to a pointer
    printf("sixth = %d\n",*p-5);
    printf("seventh = %d\n",*q-*p+20);


    return 0;
}