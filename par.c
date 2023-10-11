#include<stdio.h>
#include<conio.h>
main()
{
    int n=2,i,t;          //declaring the variables
    printf("the table of 2 is :\n");     //taking input from the user
    for(i=1; i<=10; i++)                //using for loop
    {
        t=(i*n);
    printf("%d\n",t);     //printing table
    
    }
getch();
}
