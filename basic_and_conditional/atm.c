
#include<stdio.h>
#include<conio.h>
int main()
{
    int u,v,ch;

    printf("enter the initial amout:");
    scanf("%d",&u);
    printf("\nchoices\n");
    printf("Enter \n1 for credit \n2 for debit\n3 for balance : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
      printf("enter the amount of credit :");
      scanf("%d",&v);
      u=u+v;
      printf("now your balance is :%d",u);
        break;

    case 2:
    printf("enter the amout of debit :");
    scanf("%d",&v);
    if(u>=v)
    {
        u=u-v;

        printf("now your balance is :%d",u);

    }
    else
    {
        printf("______insufficient balance_______ :(");
    }
    break;

    case 3:
    printf("your balance is : %d",u);
    break;

    default:
    printf("choose correct option for this operation .........");


    }
    printf("\n\n\t\tthank you.....");
   getch();

}
