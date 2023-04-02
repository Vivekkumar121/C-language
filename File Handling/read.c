#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *f,*m;
    int ch;
    f=fopen("copyToAnother.c","r");
    m=fopen("fir.c","w+");
    while(!feof(f)){
        ch=fgetc(f);
       // printf("%c",ch);
        fputc(ch,m);
    }
    fclose(f);
    return 0;
}
