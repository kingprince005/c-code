#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;                  //declaring the variable
    printf("enter the number :\n");     //taking the input from the user
    scanf("%d%d",&a,&b);
    a=a+b;                          //using formula
    b=a-b;
    a=a-b;
    printf("after swaping=%d\n%d\n",a,b);        //printing output
    getch();
}