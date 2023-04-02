#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    // this is to copy two files using file names in command
    FILE *f,*m;
    int ch;
    if(argc==3){
    f=fopen(argv[1],"rb");
    m=fopen(argv[2],"wb");
    while(!feof(f)){
        ch=fgetc(f);
        fputc(ch,m);
    }   
    
    fclose(f);
    fclose(m);
    }
    else {
        printf("use files like : CopyTextFile <file1.c> <file2.c> ");
    }
    return 0;
}
