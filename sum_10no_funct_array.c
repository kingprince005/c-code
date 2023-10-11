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
    int i,sum=0;
    printf("display the number :\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n",num[i]);
        sum=sum+num[i];
    }
    printf("sum=%d",sum);
}