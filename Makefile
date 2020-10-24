QueueDemo: main.o Queue.o Queuetest.o
	g++ -g -Wall -std=c++11 main.o Queue.o Queuetest.o -o QueueDemo

main.o: main.cpp Queuetest.h
	g++ -g -std=c++11 -c main.cpp

Queuetest.o: Queuetest.h Queuetest.cpp 
	g++ -g -std=c++11 -c Queuetest.cpp

clean:
	rm main.o QueueDemo *~
