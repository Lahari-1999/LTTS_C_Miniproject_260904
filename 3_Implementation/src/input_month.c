#include "calendar.h"//header file

int input_month(void)
{
	int month;
	printf("\n\t\tPlease enter a month (example: 04) : ");
	scanf("%d",&month);//user input accepting the month value
	return month;// returning the month value
}