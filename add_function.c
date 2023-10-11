#include<stdio.h>
#include<conio.h>
int sum(int,int,int);                       //declaring the function
main()
{
int a,b,c,d;                                    //declaring the variables
printf("enter the any three number :\n");       //taking inputs from the user
scanf("%d%d%d",&a,&b,&c);
d=sum(a,b,c);                                   //calling the function
printf("sum=%d",d);
getch();
}
int sum(int x,int y,int z)                      //defining the function
{
    int a;
    a=x+y+z;
    return(a);                               //returning the value
}
