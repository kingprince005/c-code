#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;                //using array to declare the variable
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
    printf("multiplication of two matrix :\n");       //printing addition of matrix a and b
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=0;
            for(k=0; k<3; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];            //using formula
            }  
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