#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the any number");
    scanf("%d",&n);
    int isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
        }
    }
    if(isprime)
    {
        printf("the number %d is prime number",n);
    }
    else{
        printf("the number %d is not prime number",n);
    }
    return 0;
}