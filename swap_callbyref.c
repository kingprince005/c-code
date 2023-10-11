#include<stdio.h>
#include<conio.h>
int swap(int *,int *);          //declaring the function
main()
{
    int a,b;                    //declaring the variable
    printf("enter the number :\n");            //taking input from the user
    scanf("%d%d",&a,&b);
    swap(&a,&b);            //calling the function
    getch();
}
int swap(int *x,int *y)     //defining the function
{
    int w;
    w=*x;
    *x=*y;
    *y=w;
    printf("after swaping =%d\n%d\n",*x,*y);        //printing output
}