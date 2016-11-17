ADDITION = operator+=.o
OPERATION = copyconstr1.o copyconstr2.o add.o sub.o
SUBTRACTION = operator-=.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: addition/%.cc addition/addition.h operations/operations.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: subtraction/%.cc subtraction/subtraction.h operations/operations.h
	g++ -std=c++11 -Wall -c -o $@ $<

%.o: operations/%.cc operations/operations.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(ADDITION) $(SUBTRACTION) $(OPERATION) main.h
	g++ -std=c++11 -Wall -o main main.cc $(ADDITION) $(SUBTRACTION) $(OPERATION) main.h
