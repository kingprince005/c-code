#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i;                //declaring the variables
    printf("enter any ten number :\n");         //taking inputs from the user
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("display the array elements :\n");       //displaying the array elements
    for(i=0; i<10; i++)
    {
        printf("%d",a[i]);                  //printing output
    }
    getch();
}