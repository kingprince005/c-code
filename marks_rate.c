#include<stdio.h>
#include<conio.h>
main()
{
    float m1,m2,m3,m4,m5;               //declaring the variable
    float per;                           // declaring the variable
    char grade;                           // declaring the variable
    printf("enter the marks :\n");              //taking input from the user
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;               //using formula
    if (per>=85)                                //using if else statement with condition
        printf("grade=%c",'A');
    else if (per>=70 && per<85)
        printf("grade=%c",'B');
    else if (per>=55 && per<70)
        printf("grade=%c",'C');
    else if (per>=40 && per<55)
        printf("grade=%c",'D');
    else
        printf("grade=%c",'R');
    getch();
}