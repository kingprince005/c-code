#include<Stdio.h>
#include<conio.h>
main()
{
    int a[3][3],i,j;            //declaring the variables
    printf("enter the array of a :\n");         //taking inputs from the user
    for(i=0; i<3; i++)        
    {   
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display the elements of array :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);             //displaying matrix of a
        }
        printf("\n");
    }
getch();
}
