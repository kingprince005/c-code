#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,r;
    printf("enter the number :\n");
    scanf("%d",&a);
    printf("enter the base :\n");
    scanf("%d",&b);
    r=pow(a,b);
    printf("result=%d",r);
    getch();
}