#include<stdio.h>
#include<conio.h>
main()
{
    float c,f;                                  //declaring the variable
    printf("enter the temperature :\n");            //taking inputs from the user
    scanf("%f",&c);
    f=(9*c)/5+32;                               //using formula
    printf("In fahrenheit=%.2f",f);
    getch();
}