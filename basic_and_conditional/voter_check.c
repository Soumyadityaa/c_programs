/*any person is eligible for voter or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if (age>18||age==18)
    {
        printf("person is eligible for voter");
        /* code */
    }
    else
    {
        printf("person id not eligible for voter");
    }
    
    getch();
}