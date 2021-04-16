#include "calendar.h" //including header file 


int input_year(void) // function for scanning year 
{
	int year;
	printf("\n\t\tPlease enter a year (example: 2021) : ");
	scanf("%d", &year);
	return year; //returning year value
}


