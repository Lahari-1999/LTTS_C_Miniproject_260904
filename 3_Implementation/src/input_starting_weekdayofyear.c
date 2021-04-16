#include "calendar.h" //including header file 


int starting_weekday_of_year(int year) //function for identifying the first week day of the  year
{
	int daycount;
	int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycount = (year + d1 - d2 + d3) %7;
	//printf("%d is day code \n",daycount);
	return daycount; //returning the first week day value
}