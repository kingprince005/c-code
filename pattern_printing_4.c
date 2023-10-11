#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;                                      //declaring the variables
    for(i=1; i<=5; i++)                  //using for loop
    {
        for(j=1; j<=i; j++)
        {
            if(j==1)                            //using if else condition
                printf("A");
            else if(j==2)
                printf("B");
            else if(j==3)
                printf("C");
            else if(j==4)
                printf("D");
            else if(j==5)
                printf("E");
        }
        printf("\n");                               //printing output to the next line
    }
    getch();
}