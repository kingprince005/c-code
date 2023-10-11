#include<stdio.h>
#include<conio.h>
main()
{
    int i=1;             //assigning the value of i
    do                      //using do while loop
    {
        printf("%d\n",i);
        i=i+1;
    }
    while (i<=10);          //applying condition
    getch();    
}