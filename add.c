#include "stdio.h"
int main()
{
    int A,B,C;
    printf("Enter number A ");
    scanf("%d", &A);
    printf("Enter number B ");
    scanf("%d", &B);
    printf("Enter number C ");
    scanf("%d", &C);
    
    (A>B) &&(A>C)?printf("then A>=B and A>=C"):(B>A && B>C)?printf("B>=A and B>=C"):(C>A && C>B)?printf("C>=A and C>=B"):printf("atleast two or three number are equal");

    return 0;
    
}