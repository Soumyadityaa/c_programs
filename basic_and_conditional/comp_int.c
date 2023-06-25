                 /*compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float pri,time,rate,amt,ci,a;

    printf("enter principal amt. :");
    scanf("%f",&pri);
    printf("enter time period :");
    scanf("%f",&time);
    printf("enter rate of interest :");
    scanf("%f",&rate);
     
    a=1+(rate/100);
    amt=pri*pow(a,time);
    ci=amt-pri;

    printf("Compound interest is: %.2f",ci);
    printf("\namount is %.2f",amt);
   
    getch();
} 
