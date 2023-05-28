#include<stdio.h>
void main()
{
    int a,b,c,d,Max;
    printf("Enter the values of a:");
    scanf("%d",&a);
    printf("Enter the values of b:");
    scanf("%d",&b);
    printf("Enter the values of c:");
    scanf("%d",&c);
    printf("Enter the values of d:");
    scanf("%d",&d);

    Max=(a>b)? (a>d?a:d) : (b>c?b:c);

    printf("\n\nThe maximum number is %d\n\n",Max);


}


