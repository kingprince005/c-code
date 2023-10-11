#include<stdio.h>
#include<conio.h>
main()
{
    float km,m,cm,feet;                             //declaring the variables
    printf("enter the distance in km :\n");         //taking inputs from the user
    scanf("%f",&km);
    m=km*1000;                          //applying formula
    cm=m*100;
    feet=cm*2.54;
    printf("%.2f\n%.2f\n%.2f\n",m,cm,feet);                 //printing output
    getch();
}