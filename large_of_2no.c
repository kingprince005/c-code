#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;            //declaring the two variables
    printf("enter the two number :\n");      //taking input from the user
    scanf("%d%d",&a,&b);
    if(a>b)                 //applying condition
    {
        printf("%d is greater",a);      //print output according to the condition
    }
    else
    {
        printf("%d is greater",b);       //print output according to the condition
    }
    getch();
}