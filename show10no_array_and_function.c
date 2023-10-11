#include<stdio.h>
#include<conio.h>
void display(int num[]);
main()
{
    int num[10],i;
    printf("enter the any 10 number :\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
    }
    display(num);
    getch();
}
void display(int num[])
{
    int i;
    printf("display the number :\n");
    for(i=0; i<10; i++)
    {
        printf("%d",num[i]);
    }
}