#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;          //declaring the variable
    printf("enter the two number :\n");         //taking input from the user
    scanf("%d%d",&a,&b);
    c=a+b;                              //using formula
    printf("sum=%d",c);                     //printing output
    getch();
}