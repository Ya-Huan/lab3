lab3: class.o lab3.o
	g++ -o lab3 lab3.o class.o

class.o: class.cpp class.h
	g++ -c class.cpp

lab3.o: lab3.cpp class.h
	g++ -c lab3.cpp

clean:
	rm class *.o
