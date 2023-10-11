#include<stdio.h>
#include<conio.h>
int fact(int);                      //declaring the function
main()
{
    int m,n;                            //declaring the variables
    printf("enter the number :\n");         //taking inputs from the user
    scanf("%d",&n);
    m=fact(n);                               //calling the function
    printf("factorial=%d",m);
    getch();
}
int fact (int x)                            //defining the function
{
    int i,f=1;
    for(i=1; i<=x; i++)                     //using for loop
    {
        f=f*i;
    }
    return(f);
}