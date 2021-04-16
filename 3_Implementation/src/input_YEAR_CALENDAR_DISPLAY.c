#include "calendar.h" //Including header file 

int YEAR_CALENDAR_DISPLAY(int year,int weekday ) //function for displaying year calendar with parameters year and starting week day of the year
{
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//Array for storing no. of days in a months
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"}; // Array for storing months information
	printf("LTTS_C_Miniproject \n\n%cCALENDAR PROJECT%c\n\n",40,41);
	int m, d;
	printf("\n\nYEARLY CALENDAR VIEW\n" );
	
	if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) ) // checking for a leap year
    {
        days_in_month[2] = 29; // setting february to 29 days if it is leap year
    }
    
    
	for ( m = 1; m <= 12; m++ ) // printing monthly calendar
	{
		printf("%s - %d", months[m],year);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		

		for ( d = 1; d <= 1 + weekday * 5; d++ )
		{
			printf(" "); //printing spaces before starting of the month
		}
		
		
		for ( d = 1; d <= days_in_month[m]; d++ )
		{
			printf("%2d", d ); //printing days in the month
			
		
			if ( ( d + weekday ) % 7 > 0 )
				printf("   " ); //spaces between weekdays
			else
				printf("\n " ); // printing in the newline after completion of a week
		}
		
			weekday = ( weekday + days_in_month[m] ) % 7;
	}
	printf("\n\n" );
	printf("\n\nMENU OPTIONS >>  " );
	//system("pause");
	
	return 1;//returning value 1 after successful execution of year calendar display function
	select_menu();
	
	
}

