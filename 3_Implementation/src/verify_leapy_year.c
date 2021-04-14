#include"calendar.h"

int verify_leapy_year(int year)
{
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};
	if(year% 4 == 0 && year%100 != 0 || year%400 == 0)
	{
		days_in_month[2] = 29;
		return 1;
	}
	else
	{
		days_in_month[2] = 28;
		return 0;
	}
}
