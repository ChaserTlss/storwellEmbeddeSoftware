all:calcPaper.o main.o
	gcc -o calcPaper calcPaper.o main.o

calcPaperTest.o:calcPaper.c
	gcc -c -o calcPaperTest.o calcPaper.c -DTEST -g
testTest.o:test.c
	gcc -c -o testTest.o test.c -DTEST -g

test:calcPaperTest.o testTest.o
	gcc -o calcPaperTest calcPaperTest.o testTest.o -g

clean:
	rm -f calcPaper calcPaperTest *.o
