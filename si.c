#include<stdio.h>
#include<conio.h>
main()
{
    float si,p,r,t;               //declaring the variable
    printf("enter the value of p,r,t :\n");         //taking input from the user
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;                   //using formula
    printf("simple interest = %.2f\n",si);          //printing output
    getch();
}