#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j;                          //declaring the variables
    printf("enter the number :\n");          //taking input from the user
    scanf("%d",&n);
    for (i=1; i<=n; i++)                    //using for loop
    {
        for (j=1; j<=i; j++)
        {
            printf("%d\t",i);                   //number printing
        }
        printf("\n");
    }
    getch();    
}