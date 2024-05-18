CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = student_management

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)