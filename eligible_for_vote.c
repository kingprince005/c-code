#include<stdio.h>
#include<conio.h>
main()
{
    int age;                //declaring the variable
    printf("enter the age :\n");         //taking input from the user
    scanf("%d",&age);
    if(age>18)                      //using if else conditon
    {
        printf("eligible for voating");
    }
    else 
    {
        printf("not eligible for voating");
    }
    getch();
}