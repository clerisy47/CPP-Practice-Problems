/*Write a program to read name, rollno, address, and phone number of 
each student in your class using structure. Store the information in 
file so that you can recover the information later. While recovering 
the information from the file sort the information alphabetically according to the name.*/
#include<stdio.h>//or
#include<string.h>
#include<windows.h>
typedef struct
{
    char name [20];
    int roll;
    char address[30];
    long long int number;
} std;
void sort(std *temp);
int NoOfStudents;
int main ()
{
    printf("Enter the no of students whose data is to added:\t");
    scanf("%d",&NoOfStudents);
    std bct[NoOfStudents];
    FILE *f;
    f=fopen("data.txt","w");
    int i;
    for(i=0;i<NoOfStudents;i++)
    {
        printf("Enter your name:\t");
        scanf(" %[^\n]s",bct[i].name);
        printf("\nEnter your address:\t");
        scanf(" %[^\n]s",bct[i].address);
        printf("\nEnter your roll number:\t");
        scanf("%d",&bct[i].roll);
        printf("\nEnter your phone number:\t");
        scanf("%lld",&bct[i].number);
    }
        fwrite(bct,sizeof(bct),1,f);
    fclose(f);
    f=fopen("data.txt","r");
    fread(bct,sizeof(bct),1,f);
    fclose(f);
    sort(bct);
    system("cls");
    for (i=0;i<NoOfStudents;i++)
    {
        printf("%s\n",bct[i].name);
        printf("%s\n",bct[i].address);
        printf("%d\n",bct[i].roll);
        printf("%lld\n\n",bct[i].number);
    }
}
void sort(std *temp)
{
    std t;
    for (int i=0;i<NoOfStudents-1;i++)
    {
        for (int j=i+1;j<NoOfStudents;j++)
        {
            if(strcmp(temp[i].name,temp[j].name)>0)
            {
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }
    }
}

