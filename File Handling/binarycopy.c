#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fpr, *fpw;
    int ch;
    fpr=fopen("argv[1]","rb");
    fpw=fopen("argv[2]","w");
    if(fpr==NULL){
        printf("file not found");
    }
    else {
        while(ch=fgetc(fpr)!=EOF){
            fputc(ch,fpw);
        }
        printf("file copied <read.c> ");
    }
    // fclose(fpr);
    // fclose(fpw);
    return 0;
}
