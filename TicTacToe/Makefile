objects = ttt.o functions.o
name = TicTacToe

all: TicTacToe

TicTacToe: $(objects)
	g++ -o $(name) $(objects)

ttt.o: ttt.cpp
	g++ -c ttt.cpp

functions.o: functions.cpp functions.hpp
	g++ -c functions.cpp

clean:
	rm *.o $(name).exe