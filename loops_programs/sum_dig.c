#include<stdio.h>
#include<conio.h>

void main()
{
    int n,sum,rem;
    printf("enter Number :");
    scanf("%d",&n);
    sum=0;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digit: %d",sum);
    
    getch();
} 