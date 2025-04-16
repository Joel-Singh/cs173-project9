all: main

main: main.o 
	g++ -std=c++11 -fsanitize=address -Wall -g -o main main.o 

main.o: main.cpp List.h List.cpp
	g++ -std=c++11 -fsanitize=address -c -g -Wall main.cpp



