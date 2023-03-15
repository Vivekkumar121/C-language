#include "stdio.h"

int main()
{
    int a,b;
    char z,x,f,n,s;
    printf("enter Gender (M/F) = ");
    scanf("%c",&z);
    fflush(stdin);
    printf("enter Smoket or NOT (S/N) = ");
    scanf("%c",&x);
    fflush(stdin);
    printf("enter Age = ");
    scanf("%d",&a);
    int amt;
    if(a>=21 && a<=30){amt=10000;
    if(z=='f'){amt=amt-(amt/10);
    if(x=='n'){amt=amt-(amt/10);}}
    else {amt;
    if(x=='s') amt=amt+(amt/10);}}
    else if(a>=31 && a<=40){ amt=15000;
    if(z=='f'){amt=amt-(amt/10);
    if(x=='n'){amt=amt-(amt/10);}}
    else {amt;
    if(x=='s') amt=amt+(amt/10);}}
    else if(a>=41 && a<=50 ){amt=20000;
    if(z=='f'){amt=amt-(amt/10);
    if (x=='n'){amt=amt-(amt/10);}}
    else {amt;
    if(x=='s') amt=amt+(amt/10);}}  
    else if(a>51 && a<=60){amt=40000;
    if(z=='f'){amt=amt-(amt/10);
    if(x=='n'){amt=amt-(amt/10);}}
    else {amt;
    if(x=='s') amt=amt+(amt/10);}}
    else if(a!=0){printf("insaurance not possible");}
     
     printf("the insurance amount is %d",amt);
}  

