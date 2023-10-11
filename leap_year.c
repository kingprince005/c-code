#include<stdio.h>
#include<conio.h>
int main()
{
    int year;                   //declaring the variable
    printf("enter the year :\n");           //declaring the variables
    scanf("%d",&year);
    if(year%4==0)           //using if else statements
    {
        printf("it is a leap year");
    }
    else 
    {
        printf("it is not leap year");
    }
    getch();
}