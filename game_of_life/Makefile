CC = g++
CFLAGS = -Wall -g -std=c++11
SRCDIR = src
TESTDIR = test

SUBDIRS = $(SRCDIR) $(TESTDIR)

all:
	for i in $(SUBDIRS) ; do \
		( cd $$i ; make ) ; \
	done

doc: Doxyfile
	doxygen

clean:
	rm -rf doc/ *~
	for i in $(SUBDIRS) ; do \
		( cd $$i ; make clean) ; \
	done
