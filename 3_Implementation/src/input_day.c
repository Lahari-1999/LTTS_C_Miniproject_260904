#include "calendar.h" //header file 
int input_day(void)
{
	int day;
	printf("\n\t\tPlease enter a day (example: 13) : ");
	scanf("%d",&day); //accepting user input DAY 
	return day; // returning day value 
}