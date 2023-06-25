/*find middle no. between 3 no. in logical operator  */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter 3 no.:");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b&&a<c||a<b&&a>c)
    {
        printf("%d is middle no. of  %d and %d",a,b,c);
    }
    if (b>a&&b<c||b<a&&b>c)
    {
       printf("%d is middle no. of %d and %d",b,c,a);
    }
    
    else
    {
        printf("%d is middle no. of %d and %d",c,a,b);
    }
    getch();
}