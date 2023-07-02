/*Reverse of any Number*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,rem;
    unsigned int rev;
    printf("enter a Number :");
    scanf("%d",&n);
    rev=0;
    while (n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("reverse of this digit: %u",rev);
    
    getch();
} 
