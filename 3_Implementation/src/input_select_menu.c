#include "calendar.h" //including header file

int select_menu()//select menu function for implementing user options
{
	system("cls");
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	int Modulecall;
	Modulecall = choose_module();//calling choose module to pick up from menu listings
	
	
	if(Modulecall== 1)
	{
		YEAR_INFO(input_year());//calling year info function 
	}
	else if(Modulecall== 2)
	{
		
		DAY_INFO(input_year(),input_month(),input_day());//calling day info function
	}
	else if(Modulecall== 3)
	{
		int year_read=0;;
		year_read=input_year();//getting year information from the user
		system("cls");
		YEAR_CALENDAR_DISPLAY(year_read,starting_weekday_of_year(year_read)); //calling year display function
		
	}
	else if(Modulecall== 4)
	{  		
		
		MONTH_CALENDAR_DISPLAY(input_year(),input_month()); //calling month display function with parameters calling year input and month input functions
		
	}
	else //if the user enter not a valid option :: displays warning to user
	{
		printf("\n\n PROGRAM CRASHED DUE TO AN ERROR || UPDATING INFORMATIOM TO LOG FILE \n\n");
		//call Logfile on further development
	}
	return 0;
}
