PROG = ../elis
SRCS = $(filter-out main.cpp, $(wildcard *.cpp)) $(wildcard */*.cpp)
HDRS = $(wildcard *.h) $(wildcard */*.h)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
DEPFILES = $(patsubst %.cpp,%.d,$(SRCS))

CC = g++-4.8
CFLAGS = -Wall -g -O2 -I. -std=c++11


all: $(PROG) $(OBJS)

-include $(DEPFILES)

%.d: %.cpp
	$(CXX) $(CFLAGS) -MM -MT '$(patsubst %.cpp,%.o,$<)' $< -MF $@

$(OBJS): %.o: %.cpp $(SRCS) $(HDRS)
	$(CC) -c $(CFLAGS) $< -o $@

$(PROG): $(OBJS) main.cpp
	$(CC) $(CFLAGS) -lncurses $(OBJS) main.cpp -o $(PROG)

clean:
	rm -f $(OBJS) $(PROG)
