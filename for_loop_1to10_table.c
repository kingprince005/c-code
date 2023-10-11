#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,t;          //declaring the variables
    for(i=1; i<=10; i++)        //using for loop to print tables 1 to 10
    {
        for(j=1; j<=10; j++)
        {
            t=i*j;
        printf("%d\t",t);           //printing table
        }
        printf("\n");       //jumping to next line
    }
getch();
}
