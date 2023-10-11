//write a program to merge or combine two string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str1[15],str2[15];                   //using array for declaring the data size
    printf("enter the string 1:\n");         //taking input from the user
    gets(str1);
    printf("enter the string 2:\n");         //taking input from the user
    gets(str2);               
    strcat(str1,str2);           //using formula
    printf("after combining=%s",str1);            //printing output
    getch();
}