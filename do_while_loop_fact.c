#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,fact=1,n;                //assigning the value of i and f
    printf("enter the number :\n");     //taking input from the user
    scanf("%d",&n);
    do                   //using do while loop 
    {
        fact=fact*i;        //applying formula
        i=i+1;
    }
       while (i<=n);
       
      printf("factorial=%d",fact);          //printing output

    getch();
}