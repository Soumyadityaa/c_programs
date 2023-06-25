/*Check no. is odd or even */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter  no.:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is even no.",n);
    }
    else
    {
        printf("%d is odd no.",n);
    }
    getch();
}