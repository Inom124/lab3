first.o:
	g++ -D_REENTERANT -lpthread -c first.cpp
all:
	g++ -pthread first.o -o first
clean:
	rm -R first.o
