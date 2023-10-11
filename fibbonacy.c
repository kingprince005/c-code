#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,i,n;
    printf("enter the number required for series :\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\t%d\t",a,b);
    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    getch();
}