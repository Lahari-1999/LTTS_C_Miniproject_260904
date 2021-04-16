#include "calendar.h" //header file 

int choose_module(void)//user options selection module
{
	int option; //variable to store user input
	printf("\t\tChoose Module :\n\n");
	printf("\t\t1) YEAR INFO\n");
	printf("\t\t2) DAY  INFO\n");
	printf("\t\t3) YEARLY CALENDAR\n");
	printf("\t\t4) MONTHLY CALENDAR\n\n");
	printf("\t\tWating for user input ... |  ");
	scanf("%d",&option);
	if(option>=1 && option<=4 )
	{
		return option; //function returns user choice
	}
	else  //error handling
	{
		system("cls");//clears termnial screen
		printf("\n\t\tINVALID ENTRY || PLEASE TRY AGAIN\n\n");		
		choose_module();//loopingfunction - if wrong module selected
	}
	
}