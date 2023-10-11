#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n,fact=1;               //assigning the value of fact=1
    printf("enter the number :\n");     //taking the input from the user
    scanf("%d",&n);
    for(i=1; i<=n; i++)             //using forloop
    {
        fact=fact*i;                //using formula
    }
    printf("factorial=%d",fact);        //printing output
getch();
}