CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRCS = detail.c
OBJS = $(SRCS:.c=.o)
TARGET = detail

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJS)