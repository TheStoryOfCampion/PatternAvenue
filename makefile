main:  *.o
	g++  -std=c++98  -o  main  *.o


*.o: *.cpp *.h
	g++  -std=c++98  -g  -c  *.cpp
	
run:
	./main
	
	
clean:
	rm *.o main
