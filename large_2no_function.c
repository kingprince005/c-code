#include<stdio.h>
#include<conio.h>
void large(int,int);                        //declaring the function
main()
{
    int a,b;                                 //declaring the variables
    printf("enter any two numbers :\n");                   //taking inputs from the user
    scanf("%d%d",&a,&b);
    large(a,b);                                   //calling the function
    getch();
}
void large(int x,int y)                      //define the function
{
    if(x>y)
        printf("%d is larger",x);               //printing output
    else
        printf("%d is larger",y);                   //printing output
}