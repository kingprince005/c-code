#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i,sum=0;                  //declaring and instiallising the varibles 
    printf("enter the any 10 number :\n");      //taking inputs from the user
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);           //printing sum
}