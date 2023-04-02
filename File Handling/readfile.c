#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    int ch;
    fp=fopen("readfile.c","r");
    // f1=fopen("f1.txt","r");
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}