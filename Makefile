Run: main.o Queue.o Queuetest.o
	g++ -std=c++11 -g -Wall main.o Queue.o Queuetest.o -o Run

main.o: main.cpp 
	g++ -std=c++11 -g -Wall -c main.cpp

Queuetest.o: Queuetest.h Queuetest.cpp
	g++ -std=c++11 -g -Wall -c Queuetest.cpp

clean:
	rm *.o Run

