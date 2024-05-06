/*Write a program to find the average expenditure of a company for 
each month of each year, each year and average over the range of 
years specified. Use arrays to construct a table, display the table
 of expenditure and find the sum and average.*/
#include<stdio.h>//or
#include<windows.h>
int main()
{
    printf("Enter no of years to be added:\t");
    int no_of_years;
    scanf("%d",&no_of_years);
    float finance[no_of_years+1][14];
    int i,j;
    float temp;
    for(i=0;i<no_of_years;i++)
    {
        printf("Enter year:\t");
        scanf("%f",&finance[i][0]);
        temp=0;
        for(j=0;j<12;j++)
        {
            switch(j)
            {
            case(0):
                printf("january:\t");
                break;
            case(1):
                printf("february:\t");
                break;
            case(2):
                printf("March:\t");
                break;
            case(3):
                printf("April:\t");
                break;
            case(4):
                printf("may:\t");
                break;
            case(5):
                printf("June:\t");
                break;
            case(6):
                printf("July:\t");
                break;
            case(7):
                printf("August:\t");
                break;
            case(8):
                printf("September:\t");
                break;
            case(9):
                printf("October:\t");
                break;
            case(10):
                printf("November:\t");
                break;
            case(11):
                printf("December:\t");
            }
             scanf("%f",&finance[i][j+1]);
             temp=temp+finance[i][j+1];
             if(j==11)
             {
                 finance[i][j+2]=(temp/12);
             }
        }
        printf("\n");
        system("cls");
    }
    temp=0;
    for(i=1;i<=12;i++)
    {
        for(j=0;j<no_of_years;j++)
        {
            temp=temp+finance[j][i];
        }
        finance[no_of_years][i]=temp/no_of_years;
        temp=0;
    }
    system("cls");
    printf("Year\tjan\tfeb\tmar\tapril\tmay\tjune\tjuly\taug\tsep\toct\tnov\tdec\tavg\n");
    for(i=0;i<=no_of_years;i++)
    {
        if(i==no_of_years)
        {
            printf("Avg-->");
        }
        for(j=0;j<=13;j++)
        {
        if(((i==no_of_years)&&(j==0))|| (i==no_of_years)&&(j==13))
        {
            printf("\t");
            continue;
        }
            if(j==0)
            {
              printf("%0.0f\t",finance[i][j]);
            }
            else
            {
              printf("%0.1f\t",finance[i][j]);
            }
        }
        printf("\n");
    }
}

