main:    main.cpp Frutas.o Herramientas.o 
	g++ main.cpp Frutas.o Herramientas.o -o main
main.o:	main.cpp Frutas.h Herramientas.h 
	g++ -c main.cpp
Frutas:	Frutas.cpp Frutas.h
	g++ -c Frutas.cppHerramientas:	Herramientas.cpp Herramientas.h
	g++ -c Herramientas.cpp
clean:
	rm  *.o main 