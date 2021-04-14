
PROJ_NAME = main.exe

SRC =src\input_year.c \
src\input_month.c \
src\verify_leapy_year.c \
src\input_starting_weekdayofyear.c \
src\input_YEAR_INFO.c \
src\input_DAY_INFO.c \
src\input_YEAR_CALENDAR_DISPLAY.c \
src\input_MONTH_CALENDAR_DISPLAY.c \
src\choose_module.c \

INC = inc

$(PROJ_NAME): $(SRC)
	gcc $(SRC)  -I$(INC) -o main.exe
	
run:
	$(PROJ_NAME)

