#include<stdio.h>
#include<conio.h>
int add(int *,int *);           //declaring the function
int main()
{
    int a,b,c;                  //declaring the variables
    printf("enter any number :\n");             //taking the input from the user
    scanf("%d%d",&a,&b);
    c=add(&a,&b);                   //calling the function
    printf("add=%d",c);
    getch();
}
int add(int *x,int *y)      //defining the function
{
    int w;
    w=*x+*y;
    return(w);
}