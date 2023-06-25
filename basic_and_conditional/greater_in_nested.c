/*Check Greater no. between 3 no. in nested if */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter 3 no.:");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b)
    {
        if (a>c)
        {
           printf("%d is greater than %d and %d",a,b,c);
        }
        
    }
    if (b>a)
    {
       if (b>c)
       {
         printf("%d is greater than %d and %d",b,c,a);
       }
       
    }
    
    else
    {
        printf("%d is greater than %d and %d",c,a,b);
    }
    getch();
}