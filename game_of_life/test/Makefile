SRCS = life_test.cpp
LIBS = catch.h
OBJS = life_test.o
PROG = run_tests
INCLUDES = -I../src

CC = g++
CFLAGS = -Wall -g -O2

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROG)

*.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) $(LIBS) -o $(OBJS)

clean:
	rm -f run_tests $(OBJS)
