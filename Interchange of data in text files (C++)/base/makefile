parsing: parsing.o
	g++ parsing.o -o parsing
parsing.o: parsing.cpp
	g++ -c parsing.cpp
clean:
	rm -f *.o
	rm output.txt
	rm parsing
run: parsing 
	./parsing

 

