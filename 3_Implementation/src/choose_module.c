#include"calendar.h"

int choose_module(void)
{
	int option; 
	printf("\t\tChoose Module :\n\n");
	printf("\t\t1) YEAR INFO\n");
	printf("\t\t2) DAY  INFO\n");
	printf("\t\t3) YEARLY CALENDAR\n");
	printf("\t\t4) MONTHLY CALENDER\n\n");
	printf("\t\tWating for user input ... |  ");
	scanf("%d",&option);
	if(option>=1 && option<=4 )
	{
		return option;
	}
	else
	{
		system("cls");
		printf("\n\t\tINVALID ENTRY || PLEASE TRY AGAIN\n\n");		
		choose_module();
	}
	
}