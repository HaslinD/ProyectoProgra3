main:    main.cpp Usuario.o 
	g++ main.cpp Usuario.o -o main
main.o:	main.cpp Usuario.h 
	g++ -c main.cpp
Usuario:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp
clean:
	rm  *.o main 