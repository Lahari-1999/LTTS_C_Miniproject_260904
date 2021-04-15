#include "calendar.h"


int YEAR_INFO(int year)
{   
    int fd=starting_weekday_of_year(year);
    char *firstday;
	if(fd==0)
	{
		firstday = "SUNDAY";
	}
	else if(fd==1)
	{
		firstday = "MONDAY";	
	}
	else if(fd==2)
	{
		firstday = "TUESDAY";
	}
	else if(fd==3)
	{
		firstday = "WEDNESDAY";
	}
	else if(fd==4)
	{
		firstday = "THURSDAY";
	}
	else if(fd==5)
	{
		firstday = "FRIDAY";
	}
	else if(fd==6)
	{
		firstday = "SATURDAY";
	}

	system("cls");
	
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	printf("\n\t\t YEAR INFO\t%d\n",year);
	if(verify_leapy_year(year)==1)
	{
		printf("\n\t\t LEAP YEAR\n");
		printf("\n\t\t NO.OF MONTHS\t:\t%d\n",12);
		printf("\n\t\t NO.OF WEEKS\t:\t%d\n",366/7);
		printf("\n\t\t NO.OF DAYS\t:\t%d\n",366);	
		printf("\n\t\t STARTING WEEKDAY OF THE YEAR :\t%s\n\n\n\n\n",firstday);
	}
	else
	{
		printf("\n\t\t NORMAL YEAR\t(NOT LEAP YEAR)\n");
		printf("\n\t\t NO.OF MONTHS\t%d\n",12);
		printf("\n\t\t NO.OF WEEKS\t%d\n",365/7);
		printf("\n\t\t NO.OF DAYS\t%d\n",365);
		printf("\n\t\t STARTING WEEKDAY OF THE YEAR :\t%s\n\n\n\n\n",firstday);
	}
	
	printf("\n\n" );
	printf("MENU OPTIONS >>  " );
	system("pause");
	select_menu();
	return (int)firstday;
	
	
}