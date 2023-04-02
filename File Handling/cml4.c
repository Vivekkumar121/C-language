#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    char name[]="KIET MCA";
    int roll=12;
    double salary=10000.12;
    char name1[sizeof(name)];
    int roll1;
    double salary1;
    FILE *fp;
    fp=fopen("text.txt","a+");
    fprintf(fp,"%s,\t%d\t %f",name,roll,salary );
    return 0;
}