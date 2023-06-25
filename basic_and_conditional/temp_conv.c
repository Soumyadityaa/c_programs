/*temperature conversion from farenhite to celcius*/
#include<stdio.h>
#include<conio.h>

void main()
{
    float temp_f,temp_c;
    printf("enter a temp. in farenhite :");
    scanf("%f",&temp_f);
    temp_c=((temp_f-32)/9)*5;
    printf("temp. in celcius is %.2f",temp_c);

    getch();
} 
