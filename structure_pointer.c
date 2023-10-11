#include<stdio.h>
#include<conio.h>
struct student
{
    int pid;
    char name[15];
    char class[10];
    float marks;
};
main ()
{
    struct students s;
    struct students *ptr;
    ptr=&s;
    (*ptr).pid=21;
    (*ptr).name="prince";
    (*ptr).class="bca-1";
    (*ptr).marks=90;
    printf("%d\n",(*ptr).pid);  
    printf("%s\n",(*ptr).name);
    printf("%s\n",(*ptr).class);
    printf("%f\n",(*ptr).marks);
    getch();
}
