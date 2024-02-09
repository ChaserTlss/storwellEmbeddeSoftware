all:
	make -C quiz1 all
	mv quiz1/calcPaper ./

test:
	make -C quiz1 test
	mv quiz1/calcPaperTest ./
	./calcPaperTest

clean:
	make -C quiz1 clean
	rm -f calcPaper calcPaperTest
	
