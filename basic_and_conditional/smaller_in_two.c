/*Check smaller no. between 2 no. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter 2 no.:");
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        printf("%d is smaller than %d",a,b);
    }
    else
    {
        printf("%d is smaller than %d",b,a);
    }
    getch();
}