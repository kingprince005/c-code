#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,e,f;                 //declaring the variable
    printf("enter the number :\n");     //taking input from the user
    scanf("%d%d",&a,&b); 
    c=a+b;                               //using formula  
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum=%d\n",c);
    printf("sub=%d\n",d);           //printing output
    printf("mul=%d\n",e);
    printf("div=%d\n",f);
    getch();
}