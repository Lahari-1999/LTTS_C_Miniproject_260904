#include "calendar.h" // header file 
int DAY_INFO(int year,int month,int day) //day info function with parameters year,month,day
{
	
	int Day_serial=0,i=0,doy,feb=28;
	int month_array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//month array stores the total number of days in the particular month
	char week_array[7][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};//week array stores the weekdays 
	system("cls");
	printf("\t\t LTTS_C_Miniproject \n\n\t\t%c CALENDAR PROJECT %c\n\n\n",40,41);
	printf("\n\t\t DAY INFO\n");
	
	if( (year / 4 == 0) && (year % 400 == 0) && (year % 100 != 0))
    	month_array[1] = 29; //if the input year is leap year month array for febraury sets to 29 days
    
    for(i = 0 ; i < month - 1 ; i++) //checking the day week value of the year and storing the value in day_serial variable
    Day_serial = Day_serial + month_array[i];
    Day_serial = Day_serial + (day + year + (year / 4) - 2);
    Day_serial = Day_serial % 7;
    
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) ) //checking for leap year
    {
        feb = 29; //if the input year is leap year month array for febraury sets to 29 days
    }
    
	doy = day;	
	
    switch(month) //switch case for counting the day of the year as per the users month input
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
	//system("pause");
	//select_menu();
	return doy; //returning the day of the year
	
	
}
