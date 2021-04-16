/**
 * @file calendar.h
 * @author vootla lahari SDID:(260904) (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALENDAR_H__
#define __CALENDAR_H__

/**
 * @brief 
 * 
 * @return int 
 */
#include <stdio.h>
#include <stdlib.h>




int input_day(void);

int input_year(void);


int input_month(void);


/**
 * @brief 
 * 
 * @param year 
 * @return int 
 */
int verify_leapy_year(int year);

/**
 * @brief 
 * 
 * @param weekday 
 * @return int 
 */
int starting_weekday_of_year(int weekday);
/**
 * @brief 
 * 
 * @param info 
 * @return int 
 */
int YEAR_INFO(int year); 

/**
 * @brief 
 * 
 * @param date 
 * @param month 
 * @param year 
 * @return int 
 */
int DAY_INFO(int date,int month,int year);
/**
 * @brief 
 * 
 * @param year 
 * @param weekday 
 * @return int 
 */
int YEAR_CALENDAR_DISPLAY(int year,int weekday);

/**
 * @brief 
 * 
 * @param year 
 * @param month 
 * @return int 
 */
int MONTH_CALENDAR_DISPLAY(int year,int month);

/**
 * @brief 
 * 
 * @return int 
 */
int choose_module(void);

/**
 * @brief 
 * 
 * @return int 
 */
int select_menu();

#endif