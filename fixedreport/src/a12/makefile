MATRIX = copyconstructor.o destructor.o matrix1.o matrix2.o inserter.o row.o rowconst.o operator=.o moveoperator=.o swap.o
MAKER = factory.o copymatrix1.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc main.h matrixmaker.h matrix/matrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: matrix/%.cc matrix/matrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MATRIX) $(MAKER) main.h matrixmaker.h matrix/matrix.h
	g++ -std=c++11 -Wall -o main main.cc $(MATRIX) $(MAKER) main.h matrixmaker.h matrix/matrix.h
