#include<stdio.h>
#include<conio.h>
int simple(int,int,int);                            //declaring the function
main()
{
    int p,r,t,si;                                   //declaring the variables
    printf("enter the value of number :\n");                //taking inputs from the user
    scanf("%d%d%d",&p,&r,&t);
    si=simple(p,r,t);                               //calling the function
    printf("simple interest=%d",si);
    getch();
}
int simple(int x,int y,int z)                       //define the function
{
    int w;
    w=x*y*z/100;
    return(w);
}