#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("number of arguments %d \n",argc);
    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    int sum=0;
    for(int i=1;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("the sum is : %d",sum);
    return 0;
}
