#include <stdio.h>
enum month {jan, feb, mar, apr, may, june, july, aug, oct, nov, sep, dec};
const char* month[]={"jan","feb","mar","apr","may","june","july","aug","oct","nov","sep","dec"};
int main()
{
  int startingYear;
  int totalNoOfYears;
  printf("Enter the year from which your want to start tracking expenses");
  scanf(" %d",&startingYear);
  printf("Enter total no of years for which your want to calcuate");
  scanf(" %d",&totalNoOfYears);
  int expMonth[totalNoOfYears][12];
  int yearlyAvg[totalNoOfYears];
  int monthlyAvg[] = {0,0,0,0,0,0,0,0,0,0,0,0};
  int total= 0;
  int i;
  printf("Enter the expenditure for given months of the year");

  for (i = 0;i < totalNoOfYears; i++ )
    {
      printf("For year %d\n",startingYear+i);
	yearlyAvg[i] = 0;
      enum month mon;
      for (mon = jan; mon <= dec; mon++)
	{
	  printf("For month: %s",month[mon]);
	  scanf(" %d",&expMonth[i][mon]);
	  yearlyAvg[i] += expMonth[i][mon];
	  monthlyAvg[mon] += expMonth[i][mon];
	  total += expMonth[i][mon];
	}
      printf("\n");
    }
  enum month mon;
  printf("year |");
  for (mon = jan; mon <= dec; mon++)
	{
	  printf(" %s |",month[mon]);
	}
  printf("Avg");
  printf("\n");
  for (i = 0; i < totalNoOfYears; i++)
    {
      enum month mon;
      printf("%d |",i+startingYear);
      for (mon = jan; mon < dec; mon++)
	{
	  printf(" $%d |",expMonth[i][mon]);
	}
      printf(" $%d",yearlyAvg[i]/12);
      printf("\n");
    }
  printf("Avg |");
  for (mon = jan; mon < dec; mon++)
    {
      printf(" $%d |",monthlyAvg[mon]/totalNoOfYears);
    }

  printf("\n Total Expenditure $%d",total);
  printf("\n Average monthly Expediture $%d",total/(totalNoOfYears*12));
  return 0;
}

