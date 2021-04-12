PROJ_NAME = driver

SRC = src/newton_raphson.c src/bisection.c src/regula_falsi.c src/root_function.c \
src/simpson_1_3.c src/trapezoidal.c src/simpson_3_8.c src/numerical_integration.c

INC = -I inc

ifdef OS
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
	EXEC = out
	endif
endif

.PHONY : all run clean

all: $(SRC)
	gcc main.c $(SRC) $(INC) -lm -o $(PROJ_NAME).$(EXEC)

run: $(PROJ_NAME).$(EXEC)
	./$(PROJ_NAME).$(EXEC)

clean:
	rm -rf $(PROJ_NAME).$(EXEC)