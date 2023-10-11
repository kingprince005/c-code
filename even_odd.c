#include<stdio.h>
#include<conio.h>
main()
{
    int a;                                //declaring the variable
    printf("enter any number : \n");        //taking input from the user
    scanf("%d",&a);
    if(a%2==0)                  //applying condition
    {
        printf("%d is even number",a);              //printing output
    }
    else
    {
        printf("%d is odd number",a);               //printing output
    }
    getch()
;}