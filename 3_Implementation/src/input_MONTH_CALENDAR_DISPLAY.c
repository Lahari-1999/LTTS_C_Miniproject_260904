#include "calendar.h"
int MONTH_CALENDAR_DISPLAY(int year,int month)
{
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};
	system("cls");
	printf("LTTS_C_Miniproject \n\n%cCALENDAR PROJECT%c\n\n",40,41);
	int m,d,weekday=starting_weekday_of_year(year);
	printf("\n\nMONTHLY CALENDAR VIEW \n" );
	printf("%s - %d", months[month],year);
	printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
   		 {
        	days_in_month[2] = 29;
   		 }
    
		for ( m = 1; m < month; m++ )
		{
			weekday = ( weekday + days_in_month[m] ) % 7;
		}
		
		
		for ( d = 1; d <= 1 + weekday * 5; d++ )
		{
			printf(" ");
		}
		
		
		for ( d = 1; d <= days_in_month[month]; d++ )
		{
			printf("%2d", d );
			
		
			if ( ( d + weekday ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		
	printf("\n\n" );
	printf("\n\nMENU OPTIONS >>  " );
	system("pause");
	select_menu();
	return 0;
	

}