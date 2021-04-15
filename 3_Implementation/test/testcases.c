#include "unity.h"
#include "calendar.h"

void check_DAY_INFO();
void check_YEAR_CALENDAR_DISPLAY();
void check_YEAR_INFO();
void check_MONTH_CALENDAR_DISPLAY();


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
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

RUN_TEST(check_YEAR_CALENDAR_DISPLAY);
RUN_TEST(check_DAY_INFO);
RUN_TEST(check_YEAR_INFO);
RUN_TEST(check_MONTH_CALENDAR_DISPLAY);

 /* Close the Unity Test Framework */
    return UNITY_END();
}




void check_DAY_INFO(){
TEST_ASSERT_EQUAL(1,DAY_INFO(2021,1,1));
printf("\nTEST PASSED :::::: check_DAY_INFO\n");
}

void check_YEAR_CALENDAR_DISPLAY(){
TEST_ASSERT_EQUAL(0,YEAR_CALENDAR_DISPLAY(2021,4));
}

void check_YEAR_INFO(){
TEST_ASSERT_EQUAL((int)friday,YEAR_INFO(2021));
}

void check_MONTH_CALENDAR_DISPLAY(){
TEST_ASSERT_EQUAL(0,MONTH_CALENDAR_DISPLAY(2021,4));
}




























//gcc -I inc -I unity unity/unity.c main.c input_DAY_INFO.c input_day.c input_MONTH_CALENDAR_DISPLAY.c input_month.c input_select_menu.c input_starting_weekdayofyear.c input_YEAR_CALENDAR_DISPLAY.c input_YEAR_INFO.c input_year.c verify_leapy_year.c choose_module.c -o all.exe

