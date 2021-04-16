  
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include"../inc/calendar.h"

//#include "calendar.h"



/*void check_DAY_INFO(void);
void check_YEAR_CALENDAR_DISPLAY(void);
void check_YEAR_INFO(void);
void check_MONTH_CALENDAR_DISPLAY(void);*/


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}




void test_DAY_INFO(void){
TEST_ASSERT_EQUAL(1,DAY_INFO(2021,1,1));

}

void test_YEAR_CALENDAR_DISPLAY(void){
TEST_ASSERT_EQUAL(1,YEAR_CALENDAR_DISPLAY(2021,4));
}

void test_YEAR_INFO(void){
TEST_ASSERT_EQUAL(1,YEAR_INFO(2021));
}

void test_MONTH_CALENDAR_DISPLAY(void){
TEST_ASSERT_EQUAL(1,MONTH_CALENDAR_DISPLAY(2021,4));
}




int main(void){
/*Initiate the unity Test Framework */
UNITY_BEGIN();



/* Run Test Function */

/*RUN_TEST(Check_input_select_menu);
RUN_TEST(check_choose_module);
RUN_TEST(check_input_year);
RUN_TEST(check_input_month);
RUN_TEST(check_input_day);
RUN_TEST(check_verify_leapy_year);
RUN_TEST(check_input_starting_weekdayofyear);
*/

RUN_TEST(test_YEAR_CALENDAR_DISPLAY);
RUN_TEST(test_DAY_INFO);
RUN_TEST(test_YEAR_INFO);
RUN_TEST(test_MONTH_CALENDAR_DISPLAY);

 /* Close the Unity Test Framework */
    return UNITY_END();
}





















//gcc -I inc -I unity unity/unity.c main.c input_DAY_INFO.c input_day.c input_MONTH_CALENDAR_DISPLAY.c input_month.c input_select_menu.c input_starting_weekdayofyear.c input_YEAR_CALENDAR_DISPLAY.c input_YEAR_INFO.c input_year.c verify_leapy_year.c choose_module.c -o all.exe

