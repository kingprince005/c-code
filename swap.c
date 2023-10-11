#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;                        //declaring the variable
    printf("enter the number :\n");     //taking input from the user    
    scanf("%d%d",&a,&b);
    c=a;                             //using formula  
    a=b;
    b=c;
    printf("after swaping=%d\n%d\n",a,b);       //printing output
    getch();
}