#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str1[10];                         //using array for declaring the data size
    printf("enter the string 1:\n");         //taking input from the user
    gets(str1);
    strupr(str1);                          //using formula
    printf("string upper = %s",str1);            //printing output
    getch();
}