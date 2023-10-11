#include<stdio.h>
#include<conio.h>
int fact(int);          //declaring the function
main()
{
    int n,m;                //declaring the variables
    printf("enter the any number :\n");     //taking inputs from the user
    scanf("%d",&n);
    m=fact(n);                      //calling the function
    printf("factorial=%d",m);           //printing output
    getch();
}
int fact (int x)                    //define the function
{
    int i;
    if(x<=1)
    return(1);
    else
        return(x*fact(x-1));
}