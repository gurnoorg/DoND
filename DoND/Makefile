all : play
	
play: game.o
	g++ game.o -o play

game.o: game.cpp
	g++ -c game.cpp elements.h

clean:
	rm -f play *.o *.h.gch
