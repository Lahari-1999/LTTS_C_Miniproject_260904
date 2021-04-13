#include"calendar.h"
int select_menu()
{
	system("cls");
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	int Modulecall;
	Modulecall = choose_module();
	
	
	if(Modulecall== 1)
	{
		YEAR_INFO(input_year());
	}
	else if(Modulecall== 2)
	{
		
		DAY_INFO(input_year(),input_month(),input_day());
	}
	else if(Modulecall== 3)
	{
		int year_read=0;;
		year_read=input_year();
		system("cls");
		YEAR_CALENDAR_DISPLAY(year_read,starting_weekday_of_year(year_read));
		
	}
	else if(Modulecall== 4)
	{  		
		
		MONTH_CALENDAR_DISPLAY(input_year(),input_month());
		
	}
	else
	{
		printf("\n\n PROGRAM CRASHED DUE TO AN ERROR || UPDATING INFORMATIOM TO LOG FILE \n\n");
		//call Logfile on further development
	}
	return 0;
}
