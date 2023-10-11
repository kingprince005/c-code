#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;
    char a[3][3];            //declaring the variables
    printf("enter the character matrix of a :\n");         //taking inputs from the user
    for(i=0; i<3; i++)        
    {   
        for(j=0; j<3; j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    printf("displaying the character matrix of a :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%c\t",a[i][j]);             //displaying matrix of a
        }
        printf("\n");
    }
getch();
}
