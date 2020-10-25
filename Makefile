Run: main.o Queue.o queuetest.o
	g++ -std=c++11 -g -Wall main.o Queue.o queuetest.o -o Run

main.o: main.cpp queuetest.h
	g++ -std=c++11 -g -Wall -c main.cpp

queuetest.o: queuetest.h queuetest.cpp
	g++ -std=c++11 -g -Wall -c queuetest.cpp

clean:
	rm *.o Run
