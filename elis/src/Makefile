PROG = ../elis
SRCS = $(filter-out main.cpp, $(wildcard *.cpp))
HDRS = $(wildcard *.h)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
DEPFILES = $(patsubst %.cpp,%.d,$(SRCS))

CC = g++
CFLAGS = -Wall -g -O2 -I. -std=c++11


all: $(PROG) $(OBJS)

-include $(DEPFILES)

%.d: %.cpp
	$(CXX) $(CFLAGS) -MM -MT '$(patsubst %.cpp,%.o,$<)' $< -MF $@

$(OBJS): %.o: %.cpp $(SRCS) $(HDRS)
	$(CC) -c $(CFLAGS) $< -o $@

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) main.cpp -o $(PROG)

clean:
	rm -f $(OBJS) $(PROG)
