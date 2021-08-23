objects = ttt.o functions.o
name = TicTacToe

all: TicTacToe

TicTacToe: $(objects)
	g++ -g -o $(name) $(objects)

ttt.o: ttt.cpp
	g++ -g -c ttt.cpp

functions.o: functions.cpp functions.hpp
	g++ -g -c functions.cpp

clean:
	rm *.o $(name).exe

#-g flag to g++ creates debugger symbols