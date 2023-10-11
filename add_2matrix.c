#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],c[3][3],i,j;                //using array to declare the variable
    printf("enter the matrix of a :\n");        //taking inputs from the user
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the matrix of b :\n");            //taking inputs from the user
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of matrix a and b :\n");       //printing addition of matrix a and b
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];        //using formula
        }
    }
    printf("resultant of matrix c will be :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",c[i][j]);           //printing output
        }
        printf("\n");
    }
    getch();
}
