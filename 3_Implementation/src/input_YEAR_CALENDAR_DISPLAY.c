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

