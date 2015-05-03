SRCS = $(filter-out main.cpp, $(wildcard *.cpp))
HDRS = $(wildcard *.h)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
PROG = main

CC = g++
CFLAGS = -Wall -g -O2 -I. -std=c++11

all: $(PROG) $(OBJS)


$(OBJS): %.o: %.cpp $(SRCS) $(HDRS)
	$(CC) -c $(CFLAGS) $< -o $@

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) main.cpp -o $(PROG)

clean:
	rm -f $(OBJS) $(PROG)
