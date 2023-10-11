#include<stdio.h>
#include<conio.h>
main()
{
    int day;                             //declaring the variables
    printf("enter the number :\n");         //taking input from the user
    scanf("%d",&day);
    if(day==1)                          //applying condition of nested if else
        printf("Sunday");
    else if (day==2)
        printf("Monday");
    else if (day==3)
        printf("tuesday");
    else if (day==4)
        printf("Wednesday");
    else if (day==5)
        printf("thursday");
    else if (day==6)
        printf("friday");
    else if (day==7)
        printf("saturday");
    else
    printf("enter the correct number \n");          //prints when given input is out of range
    getch();
}