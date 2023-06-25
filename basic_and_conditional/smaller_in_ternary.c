/*Check smaller no. between 3 no. in ternary operator */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter 3 no.:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a<b)?(a<c)?a:c:(b<c)?b:c;
    printf("smaller no. is %d",d);
    getch();
}