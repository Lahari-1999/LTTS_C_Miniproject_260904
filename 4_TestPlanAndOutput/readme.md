# TEST PLAN:

## High level test plan

|Test ID |Description|Expected Input|Expected Output|Actual Output|Type Of Test|
|-------|-----------|--------------|------------|--------------------|------------|
|H_01   |Check if the User selects an option from the choosemodule which contains four modules in calendar, then press the required choice. | User's choice, as an integer|  SUCCESS	| SUCCESS	| Requirement based|
|H_02   | Check if the User selects an option from the available choices to enter to year information, then select the option (1) from choose module and enter year(yyyy) and it provides no.of weeks,no. of months,whether the entered year is leap year or not,starting day of that year, and no.of days in that particular year. | User's choice, as an integer ex: enter 2019|  SUCCESS	| SUCCESS	| Requirement based|
|H_03   | Check if the User selects an option from the available choices to enter to Day information, then select the option (2) from choose module. it asks to enter month(mm),day(dd),year(yyyy) and provide to know the day information  | User's choice, as an integer |  SUCCESS	| SUCCESS	| Requirement based|
|H_04   | Check if the User selects an option from the available choices to enter to yearly calendar, then select the option (3) from choose module. it asks to enter an year(yyyy) and gives the detailed yearly calendar and it provides to know the yearly information  | User's choice, as an integer |  SUCCESS	| SUCCESS	| Requirement based|
|H_05   | Check if the User selects an option from the available choices to enter to monthly information of a particular year, then select the option (4) from choose module. it asks to enter month(mm),year(yyyy) and gives the detailed monthly calendar.  | User's choice, as an integer |  SUCCESS	| SUCCESS	| Requirement based|

# Low level test plan

|Test ID |Description|Expected Input|Expected Output|Actual Output|Type Of Test|
|-------|-----------|--------------|------------|--------------------|------------|
|H_01   |When choosing from the available options, check if the input is valid or invalid |User's Choice |  SUCCESS	| SUCCESS	| Scenario based|
|H_02   |Enter the details of which user selects from the choosemodule in the menu options| User's Choice | SUCCESS	| SUCCESS	| Scenario based|
|H_03   |check the details of which user entered and provide information| User's choice|  SUCCESS	| SUCCESS	| Scenario based|
