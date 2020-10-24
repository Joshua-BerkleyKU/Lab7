QueueDemo: main.o Queue.o
	g++ -g -Wall -std=c++11 main.o Queue.o queuetest.o -o QueueDemo

main.o: main.cpp 
	g++ -g -std=c++11 -c main.cpp

queuetest.o: queuetest.h queuetest.cpp 
	g++ -g -std=c++11 -c queuetest.cpp

clean:
	rm main.o QueueDemo *~
