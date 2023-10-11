#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int value;
    char str1[10];                   //using array for declaring the data size
    printf("enter the string 1:\n");         //taking input from the user
    gets(str1);
    value=strrev(str1);                          //using formula
    printf("after reversing the string = %s",value);            //printing output
    getch();
}