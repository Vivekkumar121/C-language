/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int ch, s[100];
    int sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]sen",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",x+y,x-y);
	
    
    return 0;
}*/
#include <stdio.h>
int max(int a,int b,int c,int d);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
   int a,b,c,d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
    int e = max(a,b,c, d);
    
   // e=max(a,b,c,d);
    printf("the greatest of all is %d",e);
    
    return 0;
}int max(int a,int b,int c,int d){

   
    if(a>b && a>c && a>d)
    return a;
    else if(b>a && b>c && b>d)
    return b;
    else if(c>a && c>b && c>d)
    return c;
    else return d;
    

}