#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
    int ar,p,r;                 //declaring the variables
    printf("enter the radius of circle :\n");        //taking input from the user
    scanf("%d",&r);
    ar=pi*r*r;                 //using formula
    p=2*pi*r;
    printf("area of the circle=%d\n",ar);        //printing output
    printf("perimeter of circle=%d\n",p);
    getch();
    }