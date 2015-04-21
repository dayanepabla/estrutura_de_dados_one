all: drive

drive: src/drive_llSeq.cpp llseq.o
	g++ -Wall -std=c++0x src/drive_llSeq.cpp -I ./include -o drive

llseq.o: src/listSeq.cpp
	g++ -Wall -std=c++0x -I include -c src/listSeq.cpp

clean:
	rm drive llseq.o
