#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],i,j;                         //using array to declare the variable
    printf("enter the matrix of a :\n");                //taking inputs from the user
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix of a is :\n");                   //displaying the matrix a 
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);                     //printing matrix a
        }
        printf("\n");
    }
    printf("The transpose of matrix a is :\n");             //printing the transpose of matrix a
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[j][i]);                     //printing output
        }
        printf("\n");
    }
    getch();
}
