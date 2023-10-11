#include<stdio.h>
#include<conio.h>
void interchange(int,int);                   //declaring the function
main()
{
    int a,b;                                 //declaring the variables
    printf("enter any two number :\n");                  //taking inputs from the user
    scanf("%d%d",&a,&b);
    interchange(a,b);                             //calling the function
    getch();
}
void interchange(int x,int y)                        //define the function
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("after interswaping=%d\n%d\n",x,y);                //printing output
}