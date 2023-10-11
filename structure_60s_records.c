#include<stdio.h>
#include<conio.h>
struct students
{
    int pid;
    char name[15];
    char class[10];
    float marks;
};
main ()
{
    struct students s[60];
    int i;
    printf("enter the records of student :\n");
    for(i=0; i<60; i++)
    {
        scanf("%d\n%s\n%s\n%f\n",&s[i].pid,s[i].name,s[i].class,s[i].marks);
    }
    printf("display the records of students :\n");
    printf("%d\n%s\n%s\n%f\n",s[i].pid,s[i].name,s[i].class,s[i].marks);
    getch();
}