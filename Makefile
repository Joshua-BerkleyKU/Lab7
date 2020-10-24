QueueDemo: main.o Queue.o Queuetest.o
	g++ -g -Wall -std=c++11 main.o Queue.o Queuetest.o -o QueueDemo

main.o: main.cpp 
	g++ -g -std=c++11 -c main.cpp

Queuetest.o: 
	g++ -g -std=c++11 -c Queuetest.cpp

clean:
	rm main.o QueueDemo *~
