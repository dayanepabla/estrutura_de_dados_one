CC=g++
CFLAGS=-Wall -std=c++0x -I include

all: drive

drive: drive_llseq.o llseq.o llseqord.o llseqreg.o
	$(CC) $(CFLAGS) -o drive drive_llseq.o llseq.o llseqord.o llseqreg.o

drive_llseq.o: src/drive_llSeq.cpp llseqord.o llseqreg.o
	$(CC) $(CFLAGS) -c src/drive_llSeq.cpp -o drive_llseq.o

llseq.o: src/listSeq.cpp
	$(CC) $(CFLAGS) -c src/listSeq.cpp -o llseq.o

llseqord.o: llseq.o src/llSeqOrd.cpp
	$(CC) $(CFLAGS) -c src/llSeqOrd.cpp -o llseqord.o

llseqreg.o: llseq.o src/llSeqReg.cpp
	$(CC) $(CFLAGS) -c src/llSeqReg.cpp -o llseqreg.o

clean:
	rm drive *.o
