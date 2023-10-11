#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str1[10],str2[10];                   //using array for declaring the data size
    printf("enter the string 1:\n");         //taking input from the user
    gets(str1);
    strcpy(str2,str1);                          //using formula
    printf("after copying the string = %s",str2);            //printing output
    getch();
}