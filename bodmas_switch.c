#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d;                          //declaring the variables
    printf("enter any two number for calculation :\n");     //taking input from the user
    scanf("%d%d",&a,&b);
    printf("enter the choice: \n1.Addition\n2.Substration\n3.Multiplication\n4.Division");         //giving choice to the user 
    scanf("%d",&c);
    switch(c)                           //using switch statement
    {
        case 1:                             
        d=a+b;break;
        case 2:
        d=a-b;break;
        case 3:
        d=a*b;break;
        case 4:
        d=a/b;break;
        default:
        printf("enter the correct number \n");          //if the choice will be out of range then it will be printed
    }
    printf("result=%d",d);             //printing output
    getch();
}