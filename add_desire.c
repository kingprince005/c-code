#include<stdio.h>
#include<conio.h>
int main()
{
    int n,tn,sum=0,i;
    printf("enter your desire number :-\n");
    scanf("%d",&tn);
    printf("enter the required number :-\n");
    for(i=1; i<=tn; i++)
    {
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("sum=%d",sum);
    getch();
}