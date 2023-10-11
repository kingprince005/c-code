#include<stdio.h>
#include<conio.h>
main()
{
    int av,sub1,sub2,sub3;          //declaring the variables
    printf("enter the marks :\n");      //taking input from the user
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    av=(sub1+sub2+sub3)/3;              //using formula
    printf("average=%d",av);         //printing output
    getch();
}