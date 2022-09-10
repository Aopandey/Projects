Race: horse.o main.o race.o
	g++ horse.o main.o race.o -o Race
horse.o: horse.cpp horse.h
	g++ -c horse.cpp
main.o: main.cpp horse.h race.h
	g++ -c main.cpp
race.o: race.cpp horse.h race.h
	g++ -c race.cpp
clean:
	rm -f *.o
	rm Race
run: Race
	./Race
