MAIN = factory.o
MATRIX = copyconstructor.o destructor.o matrix1.o matrix2.o inserter.o row.o rowconst.o matrixmaker.o setblueprint.o operator=.o moveoperator=.o swap.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: %.cc main.h copymatrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: matrix/%.cc matrix/matrix.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(MATRIX) $(MAIN) main.h
	g++ -std=c++11 -Wall -o main main.cc $(MATRIX) $(MAIN) main.h
