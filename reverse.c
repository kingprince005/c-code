#include <stdio.h>
#include <conio.h>

void main(){
    int num,r,sum=0,t,add;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
printf("The number in reverse order is : %d \n",sum);
getch();
}