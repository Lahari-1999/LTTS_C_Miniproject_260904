
PROJ_NAME = main
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/input_year.c \
src/input_day.c \
src/input_month.c \
src/verify_leapy_year.c \
src/input_starting_weekdayofyear.c \
src/input_YEAR_INFO.c \
src/input_DAY_INFO.c \
src/input_YEAR_CALENDAR_DISPLAY.c \
src/input_MONTH_CALENDAR_DISPLAY.c \
src/choose_module.c \
src/input_select_menu.c \

COV_SRC = testcases.c


# All test source files
TEST_SRC = test/testcases.c\
unity/unity.c 
INC_H = inc
INC_T = unity



ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,		$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c 
	$(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) testcases.c

cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

clean:
	
	$(RM) *.$(EXEC)

