all:calcPaper.o main.o
	gcc -o calcPaper calcPaper.o main.o

test:calcPaper.o test.o
	gcc -o calcPaperTest calcPaper.o test.o

clean:
	rm -f calcPaper calcPaperTest *.o
