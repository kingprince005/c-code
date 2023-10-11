#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int l;                      //declaring variable
    char str[15];                   //using array for declaring the data size
    printf("enter the any string :\n");         //taking input from the user
    gets(str);
    l=strlen(str);                          //using formula
    printf("the length of the string=%s",l);            //printing output
    getch();
}