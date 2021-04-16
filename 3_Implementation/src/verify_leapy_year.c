#include "calendar.h" //including header file

int verify_leapy_year(int year) //function for verifying leapyear
{
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};
	if(year% 4 == 0 && year%100 != 0 || year%400 == 0)
	{
		days_in_month[2] = 29; //setting february months to 29 days
		return 1; // returning leap year 
	}
	else
	{
		days_in_month[2] = 28;
		return 0; // returning not a leap year
	}
}
