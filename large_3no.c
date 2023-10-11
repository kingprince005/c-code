            //using nested if else
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;                                  //declaring the variables
    printf("enter the number: \n");               //taking inputs from the user
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)                                         //applying the condition of nested if else
    {
        if(a>c)
        {
            printf("%d is larger",a);
        }
        else 
            printf("%d is larger",c);
    }
    else                        //printing the result according to the inputs
    {
        if(b>c)
        {
            printf("%d is larger",b);
        }
        else
        { 
            printf("%d is larger",c);
        }
    }
getch();
}