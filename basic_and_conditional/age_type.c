/*check your age and told which category you belong*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<5)
    {
        /* code */
        printf("you are baby");
    }
    else if (age<12)
    {
        printf("you are child");
    }
    else if (age<18)
    {
        printf("you are teenage");
    }
    else if (age<35)
    {
        printf("you are young and adult");
    }
    else if (age<60)
    {
        printf("you are mid aged");
    }
    else
    {
        printf("you are old");
    }
    getch();
    
}