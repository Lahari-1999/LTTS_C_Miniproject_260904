int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={" ","\n\n\nJanuary","\n\n\nFebruary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};


int input_year(void)
{
	int year;
	printf("\n\t\tPlease enter a year (example: 2021) : ");
	scanf("%d", &year);
	return year;
}

int input_month(void)
{
	int month;
	printf("\n\t\tPlease enter a month (example: 04) : ");
	scanf("%d",&month);
	return month;
}

int input_day(void)
{
	int day;
	printf("\n\t\tPlease enter a day (example: 13) : ");
	scanf("%d",&day);
	return day;
}
int verify_leapy_year(int year)
{
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

int starting_weekday_of_year(int year)
{
	int daycount;
	int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycount = (year + d1 - d2 + d3) %7;
	//printf("%d is day code \n",daycount);
	return daycount;
}

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
	return 0;
	
	
}

int DAY_INFO(int year,int month,int day)
{
	
	int Day_serial=0,i=0,doy,feb=28;
	int month_array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char week_array[7][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    system("cls");
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	printf("\n\t\t DAY INFO\n");
	
	if( (year / 4 == 0) && (year % 400 == 0) && (year % 100 != 0))
    month_array[1] = 29;
    
    for(i = 0 ; i < month - 1 ; i++)
    Day_serial = Day_serial + month_array[i];
    Day_serial = Day_serial + (day + year + (year / 4) - 2);
    Day_serial = Day_serial % 7;
    
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        feb = 29;
    }
    
	doy = day;	
	
    switch(month)
    {
        case 2:
            doy += 31;
            break;
        case 3:
            doy += 31+feb;
            break;
        case 4:
            doy += 31+feb+31;
            break;
        case 5:
            doy += 31+feb+31+30;
            break;
        case 6:
            doy += 31+feb+31+30+31;
            break;
        case 7:
            doy += 31+feb+31+30+31+30;
            break;            
        case 8:
            doy += 31+feb+31+30+31+30+31;
            break;
        case 9:
            doy += 31+feb+31+30+31+30+31+31;
            break;
        case 10:
            doy += 31+feb+31+30+31+30+31+31+30;            
            break;            
        case 11:
            doy += 31+feb+31+30+31+30+31+31+30+31;            
            break;                        
        case 12:
            doy += 31+feb+31+30+31+30+31+31+30+31+30;            
            break;                                    
    }
    
    printf("\n\t\t %d-%d-%d is %s\n",day,month,year,week_array[Day_serial]);
	printf("\n\t\t Day of the Year is %d\n\n\n\n",doy);
	
	printf("\n\n" );
	printf("MENU OPTIONS >>  " );
	system("pause");
	select_menu();
	return 0;
	
	
}

int YEAR_CALENDAR_DISPLAY(int year,int weekday )
{
	printf("LTTS_C_Miniproject \n\n%cCALENDAR PROJECT%c\n\n",40,41);
	int m, d;
	printf("\n\nYEARLY CALENDAR VIEW\n" );
	
	if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        days_in_month[2] = 29;
    }
    
    
	for ( m = 1; m <= 12; m++ )
	{
		printf("%s - %d", months[m],year);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		

		for ( d = 1; d <= 1 + weekday * 5; d++ )
		{
			printf(" ");
		}
		
		
		for ( d = 1; d <= days_in_month[m]; d++ )
		{
			printf("%2d", d );
			
		
			if ( ( d + weekday ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		
			weekday = ( weekday + days_in_month[m] ) % 7;
	}
	printf("\n\n" );
	printf("\n\nMENU OPTIONS >>  " );
	system("pause");
	select_menu();
	return 0;
	
	
}

int MONTH_CALENDAR_DISPLAY(int year,int month)
{
	system("cls");
	printf("LTTS_C_Miniproject \n\n%cCALENDAR PROJECT%c\n\n",40,41);
	int m,d,weekday=starting_weekday_of_year(year);
	printf("\n\nMONTHLY CALENDAR VIEW \n" );
	printf("%s - %d", months[month],year);
	printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
   		 {
        	days_in_month[2] = 29;
   		 }
    
		for ( m = 1; m < month; m++ )
		{
			weekday = ( weekday + days_in_month[m] ) % 7;
		}
		
		
		for ( d = 1; d <= 1 + weekday * 5; d++ )
		{
			printf(" ");
		}
		
		
		for ( d = 1; d <= days_in_month[month]; d++ )
		{
			printf("%2d", d );
			
		
			if ( ( d + weekday ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		
	printf("\n\n" );
	printf("\n\nMENU OPTIONS >>  " );
	system("pause");
	select_menu();
	return 0;
	

}

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


int select_menu()
{
	system("cls");
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	int Modulecall;
	Modulecall = choose_module();
	
	
	if(Modulecall== 1)
	{
		YEAR_INFO(input_year());
	}
	else if(Modulecall== 2)
	{
		
		DAY_INFO(input_year(),input_month(),input_day());
	}
	else if(Modulecall== 3)
	{
		int year_read=0;;
		year_read=input_year();
		system("cls");
		YEAR_CALENDAR_DISPLAY(year_read,starting_weekday_of_year(year_read));
		
	}
	else if(Modulecall== 4)
	{  		
		
		MONTH_CALENDAR_DISPLAY(input_year(),input_month());
		
	}
	else
	{
		printf("\n\n PROGRAM CRASHED DUE TO AN ERROR || UPDATING INFORMATIOM TO LOG FILE \n\n");
		//call Logfile on further development
	}
	return 0;
}

int main()
{
	select_menu();
	return (0);
}
