#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float sum=0;            //initialling the value of sum=0
    int i,n;                            //declaring the variables
    printf("enter the any number :\n");         //taking inputs from the user
    scanf("%d",&n);
    for(i=1; i<=n; i++)                 //applying the for loop
    {
        sum=sum+sqrt(i);
    }
    printf("sum=%f",sum);           //printing output
    getch();
}