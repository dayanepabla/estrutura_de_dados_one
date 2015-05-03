SRCS = $(wildcard *.cpp)
LIBS = catch.h
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
SRCOBJS = $(filter-out ../src/main.o, $(wildcard ../src/*.o))
PROG = run_tests

CC = g++
CFLAGS = -Wall -g -O2 -I../src -std=c++11

VPATH = ../src

all: $(PROG) $(OBJS)


$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

$(PROG): $(OBJS) $(SRCOBJS)
	$(CC) $(CFLAGS) $(OBJS) $(SRCOBJS) -o $(PROG)

clean:
	rm -f run_tests $(OBJS)
