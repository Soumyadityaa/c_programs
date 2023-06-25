/*check any no. that is positive or negative or neutral*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    if (n>0)
    {
        printf("no. is positive ");

    }
     if (n<0)
    {
       printf("no. is negative ");
    }
     if (n==0)
    {
        printf("no. is neutral");
    }
    getch();
    
    
    
    
}