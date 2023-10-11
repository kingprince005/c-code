#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int value;                      //declaring variable
    char str1[15],str2[10];                   //using array for declaring the data size
    printf("enter the string 1:\n");         //taking input from the user
    gets(str1);
    value=strcmp(str1,str2);                          //using formula
    printf("after comparision = %s",value);            //printing output
    getch();
}