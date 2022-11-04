main: * .o
	g++ -o  main  * .o



* .o: * .cpp * .h
	g++ -g -c * .cpp
	
	
run:
	./main
	
clean:
	rm *.o main
