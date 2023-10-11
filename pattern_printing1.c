#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j;                                   //declaring the variables
    printf("enter the number of lines :\n");        //taking input from the user
    scanf("%d",&n);
    for (i=1; i<=n; i++)                //using for loop
    {
        for (j=1; j<=i; j++)
        {                             
            printf(" *");                   //star printing
        }
        printf("\n");
    }
    getch();    
}