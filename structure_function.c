#include<stdio.h>
#include<conio.h>>
struct student
{
    int pid;
    char name[15];
    char class[10];
    float marks;
};
void display(struct student s1);
main()
{
    struct student
    s.pid=21;
    s.name="prince";
    s.class="bca-1";
    s.marks=90;
    display(s);
    getch();
}
void display (struct student s1)

{
    printf("%d\n",s1.pid);
    printf("%s\n",s1.name);
    printf("%s\n",s1.class);
    printf("%f\n",s1.marks);
}