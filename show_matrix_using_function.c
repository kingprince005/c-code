#include<stdio.h>
#include<conio.h>
void display(int num1[10][10]);
main()
{
    int num1[10][10],i,j;
    printf("enter the matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    display(num1);
    getch();
}
void display(int num1[10][10])
{
    int i,j;
    printf("display the number :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d",num1[i][j]);
        }
    }
    printf("\n");
}