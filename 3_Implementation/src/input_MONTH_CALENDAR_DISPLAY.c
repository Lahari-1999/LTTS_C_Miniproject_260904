#include "calendar.h" //header file
int MONTH_CALENDAR_DISPLAY(int year,int month)//function to display monthly calendar with parameters year and month
{
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//array storing number of days in the month
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};//array storing months information
	system("cls");
	printf("LTTS_C_Miniproject \n\n%cCALENDAR PROJECT%c\n\n",40,41);
	int m,d,weekday=starting_weekday_of_year(year);//calling starting weekday function to get the value of the week and storing in varaible weekday
	printf("\n\nMONTHLY CALENDAR VIEW \n" );
	printf("%s - %d", months[month],year);
	printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )//conforming leapyear or not
   		 {
        	days_in_month[2] = 29;//set febraury to 29 days
   		 }
    
		for ( m = 1; m < month; m++ )//getting starting week day of the month
		{
			weekday = ( weekday + days_in_month[m] ) % 7;
		}
		
		
		for ( d = 1; d <= 1 + weekday * 5; d++ ) //printing space at the starting of the month before first day of the month
		{
			printf(" ");
		}
		
		
		for ( d = 1; d <= days_in_month[month]; d++ )
		{
			printf("%2d", d ); //printing the days of month 
			
		
			if ( ( d + weekday ) % 7 > 0 )
				printf("   " );//printing the days of month with two space delimeters
			else
				printf("\n " );//printing in new line after the completion of week
		}
		
	printf("\n\n" );
	printf("\n\nMENU OPTIONS >>  " );
	//system("pause");
	//select_menu();
	return 1;//returning 1 if the function executes correctly
	

}