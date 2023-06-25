                                             /*Marksheet program*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    int roll,total;
    float per;
    char name[25];
    printf("enter roll no.: ");
    scanf("%d",&roll);
    printf("enter name: ");
    fflush(stdin);
    gets(name);
    printf("enter mark of subject 1: ");
    scanf("%d",&m1);
    printf("enter mark of subject 2: ");
    scanf("%d",&m2);
    printf("enter mark of subject 3: ");
    scanf("%d",&m3);
    printf("enter mark of subject 4: ");
    scanf("%d",&m4);
    printf("enter mark of subject 5: ");
    scanf("%d",&m5);
    total=m1+m2+m3+m4+m5;
    per=(float)total/5;


    printf("Roll No.:%d\n",roll);
    printf("name:%s\n",name);
    printf("mark of subject 1: %d\n",m1);
    printf("mark of subject 2: %d\n",m2);
    printf("mark of subject 3: %d\n",m3);
    printf("mark of subject 4: %d\n",m4);
    printf("mark of subject 5: %d\n",m5);
    printf("total marks:%d\n",total);
    printf("percentage: %.2f\n",per);
                                               /* pass/fail check*/
    if (total>200)
    {
       
        printf("pass\n");

    }
    else{
        printf("fail\n");
    }
                                              /*grade check*/
    if (total>450)
    {
        printf("Grade: O");
    }
    else if (total>400)
    {
        printf("Grade: E");
    }
    else if (total>350)
    {
        printf("Grade: A");
    }
    else if (total>300)
    {
        printf("Grade: B");
    }
    else if (total>250)
    {
        printf("Grade: C");
    }
    else if (total>200)
    {
        printf("Grade: D");
    }
    
    
getch();

}
