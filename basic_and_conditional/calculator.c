/*choice wise calculator with simple calculation like add,substract,multiply,division*/


#include<stdio.h>
#include<conio.h>


int main()
{

    printf("\t\tCALCULATOR");
    int a,b,c,ch;
    printf("\nenter 1st no.:-");
    scanf("%d",&a);
    printf("enter 2nd no.:-");
    scanf("%d",&b);

    printf("\n\t\t1.addition");
    printf("\n\t\t2.substraction");
    printf("\n\t\t3.multiplication");
    printf("\n\t\t4.division\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    c=a+b;
    break;

    case 2:
    c=a-b;
    break;

    case 3:
    c=a*b;
    break;

    case 4:
    if (b!=0)
    {
        c=a/b;
    }    
    else
    {
        printf("infinity");
        getch();
        exit(0);
    }
    break;
    
    default:
    printf("\nInvalid Choice");
    break;

    }

printf("\n\t\tthe result:%d",c);

    getch();
}
