                         /*Simple interest*/
#include<stdio.h>
#include<conio.h>

void main()
{
    float pri,time,rate,amt,si;

    printf("enter principal amt. :");
    scanf("%f",&pri);
    printf("enter time period :");
    scanf("%f",&time);
    printf("enter rate of interest :");
    scanf("%f",&rate);
     
    si=(pri*time*rate)/100;
    amt=si+pri;
    printf("simple interest is: %.2f",si);
    printf("\n amount is %.2f",amt);
  


    getch();
} 
