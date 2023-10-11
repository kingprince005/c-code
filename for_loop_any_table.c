#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j;          //declaring the variables
    printf("enter the number to print tables :\n");     //taking input from the user
    scanf("%d",&n);
    for(i=1; i<=10; i++)                //using for loop
    
    {
    printf("%d*%d=%d\n",n,i,(i*n));     //printing table
    }
getch();
}
