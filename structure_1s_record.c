#include<stdio.h>
#include<conio.h>
struct student
{
    int pid;                    
    char name[15];                 //declaring the variable with their size
    char class [10];
    float marks;
};
main ()
{
    struct student s1;
    printf("enter the records of student :\n");            //taking inputs from the user
    scanf("%d%s%s%f",&s1.pid,&s1.name,&s1.class,&s1.marks);
    printf("display the recoards of student\n");                    //displaying output
    printf("%d\n%s\n%s\n%f\n",s1.pid,s1.name,s1.class,s1.marks);    //printing output
    getch();
}
