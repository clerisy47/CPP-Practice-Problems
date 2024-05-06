/*Store and retrieve the name of the students and obtained marks 
in c programming in 1st semester using structure.*/
#include<stdio.h>//or
#include<windows.h>
struct data
{
    char name[10];
    int marks;
};
int main()
{
    int NoOfStudents;
    int i;
    printf("Enter no of students whose data is to be added:\t");
    scanf("%d",&NoOfStudents);
    struct data std[NoOfStudents];
    for(i=0;i<NoOfStudents;i++)
    {
        printf("Enter name for student %d:\t",i+1);
        scanf(" %[^\n]s",&std[i].name);
        printf("Enter marks for C:\t");
        scanf("%d",&std[i].marks);
    }
    system("cls");
    for(i=0;i<NoOfStudents;i++)
    {
        printf("Name: %s\n",std[i].name);
        printf("Marks in C: %d\n",std[i].marks);
    }
}

