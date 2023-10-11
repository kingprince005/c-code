#include<stdio.h>
#include<conio.h>
main()
{
    int days;           //using variable days
    printf("enter the number :\n");             //taking input from the user
    scanf("%d",&days);
    switch (days)                           //using switch statement
    {
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("thursday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
        default:
         printf("enter the correct number\n");           //prints when the user input is out of range
    } 
    getch();
}